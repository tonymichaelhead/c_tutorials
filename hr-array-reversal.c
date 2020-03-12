#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, *arr, i;
  scanf("%d", &num);
  arr = (int*) malloc(num * sizeof(int));
  for(i = 0; i < num; i++) {
      scanf("%d", arr + i);
  }

  int term = num / 2;
  int temp1, temp2;

  for (i = 0; i < term; i++)
  {
    temp1 = arr[i];
    temp2 = arr[num - (i + 1)];
    arr[i] = temp2;
    arr[num - (i + 1)] = temp1;
  }

  for(i = 0; i < num; i++)
      printf("%d ", *(arr + i));
  return 0;
}


