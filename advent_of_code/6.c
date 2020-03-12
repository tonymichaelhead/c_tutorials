#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
  FILE *input = fopen("6_input.txt", "r");
  int x, y, i, r=100, c=2;
  int *arr = (int *)malloc()

  if(input == NULL)
  {
    printf("Can't open input file!\n");
    exit(1);
  }

  while(2==fscanf(input, "%d, %d", &x, &y))
  {
    printf("%d %d\n", x, y);
  }

  fclose(input);
}
