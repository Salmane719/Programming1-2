#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void) {
	int type;
	int size;
	int extra;
	int i;
	float average;
	char answer;
	//---CHOSE THE TYPE OF NUMBER TO STORE IN THE ARRAY, AND SELECT NUMBER OF ELEMENTS TO STORE
	//Prompts the user to enter the type (integer or float)  to store in an array
	do{
		printf("Enter the type (integer or float) of elements to store in the array: \n");
		printf("[1] - integer\n");
		printf("[2] - float\n");
		printf("Type: ");
		scanf("%d",&type);
	}while(type!=1&&type!=2);//repeat until the option is 1 or 2
	
	//Prompts the user to enter the number of elements they wish to store in an array
	printf("How many elements do you want to store? ");
	scanf("%d",&size);
	
	//----IF: INT ARRAY
	if(type==1){
		//declare array and tmp variables
		int *intArr;
		int tmp;
		//Create sufficient memory to store the array using malloc
		intArr=(int*)malloc(size * sizeof(int));
		//check that the memory is allocated
		if (intArr == NULL) { 
	        printf("Memory not allocated.\n"); 
	        return 1;
		}
		//Ask the user to enter each of the values they want to store
		printf("Enter the values for the array: \n");
		// Get the elements of the array 
        for (i = 0; i < size; ++i) { 
        	printf("[%d] = ",i);
        	scanf("%d",&tmp);
            intArr[i] = tmp; 
        } 
        //Calculate average
        average=0;//set variable to zero
        for (i = 0; i < size; ++i) { //Sum all elements in the array and store the sum in average 
           average=average+(float)intArr[i];//use (float) to cast from int to float
        }
        average=average/size;//Calculate average by dividing the sum by the number of elements
        //Display average
  		printf("\nAverage of %d elements in the array: %.3f\n",size, average);

        
        do{
	        getchar();
			printf("\nDo you want to add more elements to the array Y/N ? ");
			scanf("%c",&answer);
		}while(answer!='N'&&answer!='n'&&answer!='Y'&&answer!='y');//repeat until the option is 'Y' 'y' 'N' or 'n'
		
		
		if(answer=='y'||answer=='Y'){
			//Prompts the user to enter the number of elements they wish to add
			printf("How many elements do you want to add? ");
			scanf("%d",&extra);
			//The new size is the old + the extra elements
			size=size+extra;
			//allocate the extra space
			intArr = realloc(intArr, size * sizeof(int)); 
			//Ask for the values
			printf("Enter the values for the array: \n");
			for (i = size-extra; i < size; ++i) { 
	            printf("[%d] = ",i);
	        	scanf("%d",&tmp);
	            intArr[i] = tmp; 
	        }
	        
	        //Calculate average
	        average=0;//set variable to zero
	        for (i = 0; i < size; ++i) { //Sum all elements in the array and store the sum in average 
	           average=average+(float)intArr[i];//use (float) to cast from int to float
	        }
	        average=average/size;//Calculate average by dividing the sum by the number of elements
	        //Display average
	  		printf("\nAverage of %d elements in the array: %.3f\n",size, average);
		}
		//deallocate the array
		free(intArr);	
	}
	//----ELSE: FLOAT ARRAY---
	else{
		float *floatArr;
		float tmp;		
		//Create sufficient memory to store the array using malloc
		floatArr=(float*)malloc(size * sizeof(float));
		//check that the memory is allocated
		if (floatArr == NULL) { 
	        printf("Memory not allocated.\n"); 
	        return 1;
		}
		//Ask the user to enter each of the values they want to store
		printf("Enter the values for the array: \n");
		// Get the elements of the array 
        for (i = 0; i < size; ++i) { 
        	printf("[%d] = ",i);
        	scanf("%f",&tmp);//*
            floatArr[i] = tmp; 
        } 
        //Calculate average
        average=0;//set variable to zero
        for (i = 0; i < size; ++i) { //Sum all elements in the array and store the sum in average 
           average=average+floatArr[i];
        }
        average=average/size;//Calculate average by dividing the sum by the number of elements
        //Display average
  		printf("\nAverage of %d elements in the array: %.3f\n",size, average);

        
        do{
	        getchar();
			printf("\nDo you want to add more elements to the array Y/N ? ");
			scanf("%c",&answer);
		}while(answer!='N'&&answer!='n'&&answer!='Y'&&answer!='y');//repeat until the option is 'Y' 'y' 'N' or 'n'
		
		
		if(answer=='y'||answer=='Y'){
			//Prompts the user to enter the number of elements they wish to add
			printf("How many elements do you want to add? ");
			scanf("%d",&extra);
			//The new size is the old + the extra elements
			size=size+extra;
			//allocate the extra space
			floatArr = realloc(floatArr, size * sizeof(float)); 
			//Ask for the values
			printf("Enter the values for the array: \n");
			for (i = size-extra; i < size; ++i) { 
	            printf("[%d] = ",i);
	        	scanf("%f",&tmp);
	            floatArr[i] = tmp; 
	        }
	        
	        //Calculate average
	        average=0;//set variable to zero
	        for (i = 0; i < size; ++i) { //Sum all elements in the array and store the sum in average 
	           average=average+floatArr[i];
	        }
	        average=average/size;//Calculate average by dividing the sum by the number of elements
	        //Display average
	  		printf("\nAverage of %d elements in the array: %.3f\n",size, average);
		}
		//deallocate the array
		free(floatArr);
	}
	
	
	
	return 0; 
}
    