#include <stdio.h>

void main()
{
  int n, i;
  int sum = 0;

  printf("Input the number of elements to be stored in the array: ");
  scanf("%d", &n);

  int arr[n];

  printf("Input %d elements in the array: \n", n);
  for(i = 0; i < n; i++)
  {
    printf("element - %d: ", i);
    scanf("%d", &arr[i]);
  }

  for (i = 0; i < n; i++)
  {
    sum += arr[i];
  }
  printf("Sum of all elements stored in the array is: %d\n", sum);
}
