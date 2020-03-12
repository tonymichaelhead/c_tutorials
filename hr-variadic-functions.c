#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int sum(int count,...)
{
  va_list valist;
  int sum = 0;
  int i;

  va_start(valist, count);
  for (i = 0; i < count; i++)
  {
    sum += va_arg(valist, int);
  }
  va_end(valist);
  return sum;
}

int min(int count,...)
{
  va_list valist;
  int current, i;

  va_start(valist, count);
  int min = va_arg(valist, int);
  for(i = 0; i < count; i++)
  {
    current = va_arg(valist, int);
    min = current < min ? current : min;
  }
  va_end(valist);
  return min;
}

int max(int count,...)
{
  va_list valist;
  int current, i;

  va_start(valist, count);
  int max = va_arg(valist, int);
  for(i = 0; i < count; i++)
  {
    current = va_arg(valist, int);
    max = current > max ? current : max;
  }
  va_end(valist);
  return max;
}

int main()
{
  printf("%d", max(5, 1, 2, 3, 4, 5));
  return 0;
}
