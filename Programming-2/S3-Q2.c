#include <stdio.h>
int main() {
    int r, c, a[20][20], b[20][20], sum[20][20], sum1[20], sum2[20], sum3[20], sum4[20], i, j, product[20][20], lol[20], hi[20];
    printf("Enter the number of rows (between 1 and 20): ");
    scanf("%d", &r);
    printf("Enter the number of columns (between 1 and 20): ");
    scanf("%d", &c);
    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    // adding two matrices
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
            product[i][j] = a[i][j] * b[i][j];
        }
         for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
           sum1[i] = sum1[i] + a[i][j]; 
           sum2[i] = sum2[i] + a[j][i];
        }
         for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
           sum3[i] = sum3[i] + b[i][j]; 
           sum4[i] = sum4[i] + b[j][i];
        }
          for (i = 0; i < r; ++i){
           lol[i] = sum1[i] + sum3[i];
           hi[i] = sum2[i] + sum4[i];
        }
        
    // printing the result
     printf("\nMatrix 1: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("%d   ", a[i][j]);
            if (j == c - 1) {
                printf("\n\n");
            }
        }
         printf("\nMatrix 2: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("%d   ", b[i][j]);
            if (j == c - 1) {
                printf("\n\n");
            }
        }
    printf("\nSum of two matrices: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("%d   ", sum[i][j]);
            if (j == c - 1) {
                printf("\n\n");
            }
        }
         printf("\nProduct of two matrices: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("%d   ", product[i][j]);
            if (j == c - 1) {
                printf("\n\n");
            }
        }
         printf("\nSum of corresponding row: \n");
         for (i = 0; i < r; ++i){
            printf("%d   ", lol[i]);
            if (j == c - 1) {
                printf("\n\n");
            }
        }
        printf("\nSum of corresponding column: \n");
        for (j = 0; j < c; ++j){
            printf("%d   ", hi[j]);
            if (j == c - 1) {
                printf("\n\n");
            }
        }
        printf("\nTotal number of numbers in array A and array B respectively are %d and %d\n", r*c, r*c );
         printf("\nChecking for the word WOW \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) 
        {
            if(a[i][j] == b[i][j])
            {
            printf("\nWOW \n");
            }
        }
    return 0;
}

   




   

