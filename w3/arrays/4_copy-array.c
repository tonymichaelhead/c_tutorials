#include <stdio.h>


void main()
{
  int n, i;
  printf("Input the number of elements to be stored in the array: ");
  scanf("%d", &n);

  int a[n], copy[n];

  printf("Input %d elements in the array: \n");
  for (i = 0; i < n; i++)
  {
    printf("element - %d: ", i);
    scanf("%d", &a[i]);
  }

  printf("The elements stored in the first array are: \n");
  for (i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }

  for (i = 0; i < n; i++)
  {
    copy[i] = a[i];
  }

  printf("The elements copied into the second array are: \n");
  for (i = 0; i < n; i++)
  {
    printf("%d ", copy[i]);
  }
  printf("\n");
}
