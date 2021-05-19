
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


//making a macro for maximum length of a string
#define size 100
#define Max 850
//making a constant global variable with the address of the file
const char *file = "number.txt";
void buffer()
{

    //getting every character in the stdin until it reaches the end or a new line
    char c;
    do
    {
        c = getchar();
    } while (c != '\n' && c != EOF);
}
//making a struct for the details of the game
typedef struct game
{

    //string that have a  track of the title
    char title[size];
    //string that have a track  of the platform
    char platform[size];
    //string that have  track of the developer
    char developer[size];
    //integer that have a track of the year1
    int year1;
    //boolean that has a track of whether the game is borrowed or not
    bool isBorrowed;
    //string that is keeping track of the borrowers name
    char borrowerName[size];
    //time of borrow is of type Date
    char borrowed_time[10];

} game;

// findFirstEmptySlot finds the first id which is not filled(ps its not Necessary but it helps the user know how many he has filled and it also helpt to check if the user has put more than 1000 entries)
size_t findFirstEmptySlot()
{
    FILE *fileptr;
    fileptr = fopen(file, "rb");
    game game;
    size_t id = 0;

    //we start from the Beginning
    fseek(fileptr, 0, SEEK_SET);
    //we check each of their titles to see if any of them is empty if its not fp is already pointing to the next object so we can loop again
    while (fread(&game, sizeof(game), 1, fileptr) == 1)
    {
        id++;
    }
    fclose(fileptr);

    return id;
}
//read All reads all the entries in the fp
void readAll(FILE *fp)
{

    game game_that_is_read;
    //we start from the Beginning
    fseek(fp, 0, SEEK_SET);
    //id keeps track of id
    int id = 1;
    //we do this while we haven't reached an emptu slot(fread will return 1 while the the gamedetail is defined because we only want 1 item)
    while (fread(&game_that_is_read, sizeof(game), 1, fp) == 1)
    {

        //printing the game_that_is_read which has the ID
        printf("id = %d , title=\"%s\" developer=\"%s\" platform=\"%s\" year1=%d ", id, game_that_is_read.title, game_that_is_read.developer,
               game_that_is_read.platform, game_that_is_read.year1);

        //if its is borrowed we want to print the details
        if (game_that_is_read.isBorrowed)
        {
            printf("the borrower's name is '%s' and she/he borrowed the game on %s\n", game_that_is_read.borrowerName, game_that_is_read.borrowed_time);
        }
        //if it's not borrowed we want to print noone has borrowed it
        else
        {
            printf("and noone has borrowed it\n");
        }
        id++;
    }
}

void changeById(FILE *fp)
{
    //declaring a variable that stores the id given by the user
    size_t id = 0;
    //declaring an instance of game
    game changeByIdGame;
    //asking the user for an id

    printf("please enter the id at which you want to make a change");
    scanf("%zd", &id);
    //getting the last defined id
    size_t MAX_ID = findFirstEmptySlot();
    //checking whether the id is defined or not and asking the user if its not defined
    while (id <= 0 || id > MAX_ID)
    {
        printf("please enter a valid value (the last availabe id = %zu)",MAX_ID);
        scanf("%zd", &id);
        buffer();
    }

    // going to the ID entered by the user by
    fseek(fp, (id - 1) * sizeof(game), SEEK_SET);
    // reading the conents of the id and storing it in changeByIdGame
    fread(&changeByIdGame, sizeof(game), 1, fp);
    //going back to the start of the id since we read through it
    fseek(fp, -1 * sizeof(game), SEEK_CUR);
    // asking the user for new details and stroing them in proper places
    // a temporary intiger to store the user input incase it might create problems if the user inputs directly into boolean
    int temp;
    printf("is it borrowed(enter 0 for no and 1 for yes)\n");
    scanf("%d", &temp);

    //assiging the boolean to value of temp
    changeByIdGame.isBorrowed = temp;
    //if its borrowed we need to ask the user for the borrowers name and the time at which the game was borrowed
    if (changeByIdGame.isBorrowed)
    {
        printf("enter borrower's name\n");
        scanf("%s", changeByIdGame.borrowerName);
        buffer();

        printf("enter the time at which the game was borrowed(in format DD/MM/YYYY\n");
        scanf("%s", changeByIdGame.borrowed_time);
        buffer();
    }
    //if the user inputs a zero in isBorrowed we fill the borrowerName and borrowed_time with an emtpy string
    else
    {
        changeByIdGame.borrowerName[0] = '\0';
        changeByIdGame.borrowed_time[0] = '\0';
    }
    //overwriting the conentc of the id inputted
    //*note that the detail of the game were stored in it at the beginning so they aren't changed
    fwrite(&changeByIdGame, sizeof(game), 1, fp);
    //emptying the buffer after using fwrite
    buffer();
}
void edit_by_me(FILE *fp)
{
    //declaring a variable that stores the id given by the user
    int id;
    //declaring an instance of game
    game newGame;
    //asking the user for an id
    printf("please enter the id which you want to edit ");
    scanf("%d", &id);
    //getting the last defined id
    size_t MAX_ID = findFirstEmptySlot();
    //checking whether the id is defined or not and asking the user if its not defined
    while (id <= 0 || id > MAX_ID)
    {
        printf("please enter a valid value (the last availabe id = %zu)");
        scanf("%d", &id);
        buffer();
    }
    // going to the ID entered by the user by
    fseek(fp, (id - 1) * sizeof(game), SEEK_SET);
    // asking the user for new details and stroing them in proper places
    printf("enter game's title\n");
    scanf("%s", newGame.title);
    buffer();
    printf("enter platform name\n");
    scanf("%s", newGame.platform);
    buffer();
    //checking if the platform is correct and asking if its not
    while (strcasecmp(newGame.platform, "pc") != 0 && strcasecmp(newGame.platform, "PS4") != 0 && strcasecmp(newGame.platform, "Xbox") != 0)
    {
        printf("please enter a valid value(pc or ps4 or xbox)\n");
        scanf("%s", newGame.platform);
        buffer();
    }
    printf("enter developer name\n");
    scanf("%s", newGame.developer);
    buffer();

    printf("enter the year1\n");
    scanf("%d", &newGame.year1);
    buffer();
    // a temporary intiger to store the user input incase it might create problems if the user inputs directly into boolean
    int temp;
    printf("is it borrowed(enter 0 for no and 1 for yes)\n");
    scanf("%d", &temp);
    //assiging the boolean to value of temp
    newGame.isBorrowed = temp;
    //if its borrowed we need to ask the user for the borrowers name and the time at which the game was borrowed
    if (newGame.isBorrowed)
    {
        printf("enter borrower's name\n");
        scanf("%s", newGame.borrowerName);
        buffer();

        printf("enter the time at which the game was borrowed(in format DD/MM/YYYY\n");
        scanf("%s", newGame.borrowed_time);
        buffer();
    }
    //if the user inputs a zero in isBorrowed we fill the borrowerName and borrowed_time with an emtpy string
    else
    {

        newGame.borrowerName[0] = '\0';
        newGame.borrowed_time[0] = '\0';
    }
    //going to the id given by the user
    fseek(fp, (id - 1) * sizeof(game), SEEK_SET);
    //overwriting the contents of that id
    fwrite(&newGame, sizeof(game), 1, fp);
    //emptying the buffer after overwitting the contents of id
    buffer();
}

void changeitnew(FILE *fp)
{
    //we declare a variable that keeps track of the new id
    size_t ID = findFirstEmptySlot();

    printf("the first empty id is %zu\n", ID + 1);
 
    fp = fopen(file, "ab");
  
    game newGame;
    // checking if the ID is bigger than max entry which is 1000 given be the question
    if (ID >= Max)
    {
        printf("all entries are defined\n");
        return;
    }

    printf("enter game's title\n");
    scanf("%s", newGame.title);
    buffer();

    printf("enter platform name\n");
    scanf("%s", newGame.platform);
    buffer();
    //checking if the platform is correct and asking again if its not
    while (strcasecmp(newGame.platform, "Xbox") != 0 && strcasecmp(newGame.platform, "PS4") != 0 && strcasecmp(newGame.platform, "pc") != 0)
    {
        printf("please enter a valid value(pc or ps4 or xbox)\n");
        scanf("%s", newGame.platform);
        buffer();
    }

    printf("enter developer name\n");
    scanf("%s", newGame.developer);
    buffer();

    printf("enter the year1\n");
    scanf("%d", &newGame.year1);
    buffer();

   
    int temp;
    printf("is it borrowed(enter 0 for no and 1 for yes)\n");
    scanf("%d", &temp);

    newGame.isBorrowed = temp;



    if (newGame.isBorrowed)
    {
        printf("enter borrower's name\n");
        scanf("%s", newGame.borrowerName);
        buffer();

        printf("enter the time at which the game was borrowed(in format DD/MM/YYYY\n");
        scanf("%s", newGame.borrowed_time);
        buffer();
    }
    else
    {
        newGame.borrowerName[0] = '\0';
        newGame.borrowed_time[0] = '\0';
    }
    //wrting the new entry
    fwrite(&newGame, sizeof(game), 1, fp);
    //emptying the buffer after overwriting
    buffer();
    fclose(fp);
}
int main(void)
{
    FILE *fp;
    //if the file doesnt exist create one
    fp = fopen(file, "rb+");
    if (fp == NULL)
    {

        fp = fopen(file, "wb+");

        fclose(fp);
    }

    char userChoice = '\0';
    do
    {
        printf("------------------------------------------------------------\n");
        printf("please enter what you want to do\n");                                             // using printf to print
        printf("enter\na to startup a game detail ,\nb to change the borrower details,\n");
        printf("c to read all of the slots,\nd to edit the game details and all the borrowers details, \n");
        printf("e to quit");
        printf("\n------------------------------------------------------------\n");
        scanf("%c", &userChoice);
        buffer();
        switch (userChoice)
        {
        case 'a':
            fp = fopen(file, "ab");
            changeitnew(fp);
            fclose(fp);

            break;
        case 'b':
            fp = fopen(file, "rb+");
            readAll(fp);
            fclose(fp);

            break;
        case 'c':
            fp = fopen(file, "rb+");
            edit_by_me(fp);
            fclose(fp);
            break;
        case 'd':
            fp = fopen(file, "rb+");
            changeById(fp);
            fclose(fp);
            break;
        case 'e':
            break;
        default:
            printf("doesn't now the character , repeat again please thanks !!\n");
            break;
        }
    } while (userChoice != 'e');
}