#include <stdio.h>

void main()
{
  int n, i, j, mm = 1, count = 0;

  printf("Input the number of elements to be stored in the array: ");
  scanf("%d", &n);

  int a[n];
  int hist[n];

  printf("Input %d elements in the array: ", n);
  for (i = 0; i < n; i++)
  {
    printf("element - %d: ", i);
    scanf("%d", &a[i]);
    hist[i] = 0;
  }

  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (a[i] == a[j])
      {
        mm++;
        hist[i] = mm;
      }
    }
    mm = 1;
  }

  for (i = 0; i < n; i++)
  {
    if (hist[i] > 1)
    {
      count++;
    }
  }
  printf("The number of duplicates found in the array are: %d\n", count);
}
