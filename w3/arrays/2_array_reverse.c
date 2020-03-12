#include <stdio.h>

void main()
{
  int i, n;

  printf("Input the number of elements to store in the array: ");
  scanf("%d", &n);

  int arr[n];
  printf("Input %d number of elements in the array:\n", n);
  for (i = 0; i < n; i++)
  {
    printf("element - %d: ", i);
    scanf("%d", &arr[i]);
  }

  printf("The values stored in the array are: ");
  for (i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\nThe values stored in the array in reverse are: ");
  for (i = n - 1; i >= 0; i--)
  {
    printf("%d ", arr[i]);
  }
}
