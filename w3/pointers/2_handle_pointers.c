#include <stdio.h>

void main()
{
  int m=29;
  int *ab=&m;

  printf("Address of m : %p\n", &m);
  printf("Value of m : %d\n", m);
  printf("\n");
  printf("Now ab is assigneed with the address of m.\n");
  printf("Address of pointer ab : %p\n", &ab);
  printf("Content of pointer ab : %d\n", *ab);
  printf("\n");
  m = 34;
  printf("The value of m assigned to 34 now.\n");
  printf("Address of pointer ab : %p\n", &ab);
  printf("Content of pointer ab : %d\n", *ab);
}
