#include <stdio.h>
#include <stdlib.h> // header files 

struct Node
{
    int data;
    struct Node *nextNode; // declaring struct // decalring integer 
};
typedef struct Node ListNode;
typedef ListNode *ListNodePtr;

//prototypes
void printList( ListNodePtr currentPtr );
void insert( ListNodePtr *sPtr, int value );

int main(void) // main 
{
    int t[7]={12,10,17,34,78,0,-15},i; // decalring element of the array 
    ListNodePtr startPtr = NULL; /* initially there are no nodes */
    for(i=0;i<7;i++){ //loop 7 times because of the index that was declared in t 
        insert(&startPtr,t[i]); // calling function insert 
    }
    printList(startPtr);//calling function printlist 
    return 0;//end of program 
}

void printList( ListNodePtr currentPtr ) // declaring function printlist 
{
    /* if list is empty */t
    if ( currentPtr == NULL ) {
        printf( "List is empty.\n\n" );
     } /* end if */
    else {
        printf( "The list is:\n" );

    /* while not the end of the list */
    while ( currentPtr != NULL ) {
        printf( "%d --> ", currentPtr->data );
        currentPtr = currentPtr->nextNode;
     }  /*end while */

    printf( "NULL\n\n" );
     } /* end else */
} /* end function printList */


void insert( ListNodePtr *sPtr, int value )// declaring the function insert 
{
    ListNodePtr newPtr = malloc( sizeof( ListNode ) ); /* create node */
    if ( newPtr != NULL ) { /* is space available */
        newPtr->data = value; /* place value in node */
        newPtr->nextNode = NULL; /* node does not link to another node */

        ListNodePtr previousPtr = NULL;  /* pointer to previous node in list */
        ListNodePtr currentPtr = *sPtr; /* pointer to current node in list */

        /* loop to find the correct location in the list */
        while ( currentPtr != NULL) {
            previousPtr = currentPtr; /* walk to ... */
            currentPtr = currentPtr->nextNode; /* ... next node */
        } /* end while */

                /* insert new node at beginning of list */
        if ( previousPtr == NULL ) {
            newPtr->nextNode = *sPtr;
            *sPtr = newPtr;
        } /* end if */
        else { /* insert new node between previousPtr and currentPtr */
            previousPtr->nextNode = newPtr;
            newPtr->nextNode = currentPtr;
            } /* end else */
    } /* end if */
    else {
        printf( "%d not inserted. No memory available.\n", value );
    } /* end else */
}