#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct county{
	char *longName;
	char *shortName;
	unsigned int population;
};

struct town{
	char *name;
	unsigned int population;
	struct county aCounty;
};


int main(void) {
	//declare variables to read files
	FILE *file_towns;
	FILE *file_counties;
	//declare array of structs to store information
	struct county *c=NULL;
	struct town *t=NULL;
	
	//Since it's a pointer one must use dinamic allocation to set the number of data to enter in the pointer
	c=malloc( 4 *sizeof(struct county)); 
	t=malloc(5*sizeof(struct town));
	
	//declare temporal variables to store information from files
	unsigned int uint;
	char temp[25];
	//since char *name, char *longName, and char *shortName are pointers, they need to point to a data in memory
	//otherwise the data is overwritten.
	char County_long[4][10];
	char County_short[4][10];
	char Town_name[5][15];

	//declare variables to use as counters
	int i,j;

	//----------COUNTIES.TXT FILE---------
	//open the file using fopen
	file_counties=fopen("counties.txt","r");
	//check that the file opens correctly
	if (!file_counties) {
		//if not, display message
        printf("Cannot open file. Please make sure the file is on correct folder\n");
        return 1;
    }
    //set i to 0
    i=0;
    //While the file has not read the end of the file (feof is true when it reach the end of the file)
	while (!feof(file_counties)){
		//Take the first value and store it on County_long[i]
		fscanf(file_counties, "%s", County_long[i]);
		//set the value of the longName
   		(c+i)->longName=County_long[i];
   	
		//Take the next value and store it on County_short[i]
   		fscanf(file_counties, "%s", County_short[i]);
   		//set the value of the shortName
   		(c+i)->shortName=County_short[i];
   		
   		//Take the last value and store it on c[i].population
   		fscanf(file_counties, "%d", &(c+i)->population);
   		//increase i in one unit
		i++;
	}
	//Close file
	fclose(file_counties);

	
	//-------------TOWN.TXT FILE----------
	//open the file using fopen
	file_towns=fopen("towns.txt", "r");
	//check that the file opens correctly
	if (!file_towns) {
        //if not, display message
        printf("Cannot open file. Please make sure the file is on correct folder\n");
        return 1;
    }
    //set i to 0
    i=0;
    //While the file has not read the end of the file (feof is true when it reach the end of the file)
	while (!feof(file_towns)){
		//Take the first value and store it on Town_name[i]
		fscanf(file_towns, "%s", Town_name[i]);
		//set the value of the name
   		(t+i)->name=Town_name[i];
   		
   		//Take the next value and store it on t[i].population
   		fscanf(file_towns, "%d", &(t+i)->population);
   		
   		//take the last value and store it on temp
   		fscanf(file_towns, "%s", temp);
   		//in a loop from 0 to 3
   		for(j=0;j<4;j++){
   			//check if the value of temp matches the longName value in c
   			if(strcmp(temp,(c+j)->longName)==0){
   				//strcmp returns true if bth strings are equal
   				//set the appropiate values
   				(t+i)->aCounty.longName=(c+j)->longName;
   				(t+i)->aCounty.shortName=(c+j)->shortName;
   				(t+i)->aCounty.population=(c+j)->population;
			}
		}
   		//increase i
		i++;
	}
	//close file
	fclose(file_towns);
	
	//------------DISPLAY INFO----------
	//use %-15s to aling the headers of each value
	printf("%-15s %-15s %-15s %-15s %-10s\n","Town Name","Population" ,"County's Name","Short Name","Population");
	printf("-----------------------------------------------------------------------------\n");
	//Display all the info stored in t 
	for(i=0;i<5;i++){
		//Notice that (t+i)->aCountry and then .longName,.shortName,.population  because the struct in the definition of the town struct is not a pointer
		printf("%-15s %-15d %-15s %-15s %-10d\n",(t+i)->name,(t+i)->population,(t+i)->aCounty.longName,(t+i)->aCounty.shortName,(t+i)->aCounty.population);
	}
	
	return 0; 
}
    





