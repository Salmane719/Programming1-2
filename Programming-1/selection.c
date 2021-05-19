#include <stdio.h>


#define MAX_SIZE 5000

int main(void)
{
  int i, j, k, minindx;
  double a[MAX_SIZE];
  double tmp, min;

  FILE *fp;

  //Scans file and puts contents in an array
  fp = fopen("floats.txt", "r");
  for (i = 0; i < MAX_SIZE; i++)
  {
    fscanf(fp, "%lf", &a[i]);
  }
  fclose(fp);

  /*INPUT*/
  printf("Enter the kth term: ");
  scanf("%d", &k);

  //Selection Sort
  for (j = 0; j < MAX_SIZE - 1; j++)
  {
    minindx = j;
    for (i = j + 1; i < MAX_SIZE; i++)
    {
      //Sorts downwards; Largest to Smallest
      if (a[i] > a[minindx])
      {
        minindx = i;
      }
    }
    /* SWAP */
    tmp = a[j];
    a[j] = a[minindx];
    a[minindx] = tmp;
  }

  //OUTPUT
  if (a[k - 1] > 0.5)
  {
    printf("The kth term, larger than 0.5 is %lf\n", a[k - 1]);
  }
  else
  {
    printf("The kth term you entered is less than 0.5");
  }

  return 0;
}