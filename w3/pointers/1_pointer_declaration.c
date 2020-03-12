#include <stdio.h>

void main()
{
  int m=10, n, o;
  int *z=&m;

  printf("Pointer : Show the basic declaration of pointer: \n");
  printf("-----------------------------------------------\n");
  printf("z stores the address of m = %p\n", z);
  printf("*z stores the value of m = %d\n", *z);
  printf("&m is the address of m = %p\n", &m);
  printf("&n is the address of n = %p\n", &n);
  printf("&o is the address of o = %p\n", &o);
  printf("&z is the address of z = %p\n", &z);
  printf("\n\n");
}
