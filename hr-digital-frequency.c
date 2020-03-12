#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
  char s[1000];
  int hist[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  scanf("%s", s);

  int i = 0;
  while (s[i] != '\0')
  {
    if (s[i] >= '0' && s[i] <= '9')
    {
      hist[s[i] - '0']++;
    }
    i++;
  }

  i = 0;
  for (i = 0; i < 10; i++)
  {
    printf("%d ", hist[i]);
  }
  return 0;
}
