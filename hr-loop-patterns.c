#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int n;
  scanf("%d", &n);

  if (n == 0)
  {
    printf("%d", 0);
    return 0;
  }

  int i;
  int j;
  for (i = n; i >= 1; i--)
  {
    for (j = n; j >= 0; j--)
    {
      /* if dd */
      printf("%d", j + i - n + n - i);
    }
    printf("\n");
  }
  return 0;
}
