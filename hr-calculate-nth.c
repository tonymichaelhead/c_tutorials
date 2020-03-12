#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calculateTerm(int n, int a, int b, int c, int currentIndex)
  {
    if (currentIndex == n - 1)
    {
      return c;
    }
    int currentValue = a + b + c;
    a = b;
    b = c;
    c = currentValue;
    currentIndex++;
    calculateTerm(n, a, b, c, currentIndex);
}

int find_nth_term(int n, int a, int b, int c) {
  return calculateTerm(n, a, b, c, 2);
}

 int main() {
  int n, a, b, c;

  scanf("%d %d %d %d", &n, &a, &b, &c);
  int ans = find_nth_term(n, a, b, c);

  printf("%d", ans);
  return 0;
}
