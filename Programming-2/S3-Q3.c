#include <stdio.h>
 
int main()
{
{
  int m, n, p, q, c, d, k, sum = 0;

   printf("Enter the lenght of the array for first ");  // using the user to enetr the element of the array for all of them 
    int z = scanf("%d",&z);
    printf("Enter the lenght of array for first second box ");
    int x = scanf("%d",&x);

 printf("Enter the lenght of the array for second  ");
    int g = scanf("%d",&g);
    printf("Enter the lenght of array for second second box ");
    int o = scanf("%d",&o);

     printf("Enter the lenght of the array for multiplication in the first box  ");
    int  l= scanf("%d",&l);
    printf("Enter the lenght of array for multiplication in the second box ");
    int u = scanf("%d",&u);
  
  int first[z][x], second[g][o], multiply[l][u]; //declaring 2d array 
 
  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter elements of first matrix\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &first[c][d]);
 
  printf("Enter number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);
// printing results 
  if (n != p)
    printf("The multiplication isn't possible.\n");
  else
  {
    printf("Enter elements of second matrix\n");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &second[c][d]);
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
 
    printf("Product of the matrices:\n");
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d\t", multiply[c][d]);
 
      printf("\n");
    }
  }

return 0 ; 


}
}