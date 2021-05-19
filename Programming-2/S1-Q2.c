
#include<stdio.h> 

int main(void){

  int a,b,c=1; int sum = 0; //declaring variables 

  printf("Enter a number:\n");// output 

  scanf("%d",&a); // input from the user 

  b=a;

  while(b){ // using while loop 

      b=b/10;

      c = c*10;

  }

  printf("each digit:\n"); // output 

  while(c>1){ //using while loop to check condition 

      c = c/10;

      printf("%d\n ",a/c); // output 
      sum = sum + (a/c);  // computation 
      a = a % c;

  }
    printf("the sum is %d",sum); //outputing all calculation by storing everything into sum
  return 0; // end of the program 

}