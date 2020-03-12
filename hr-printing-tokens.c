#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    int i = 0;
    while (s[i] != '\0')
    {
      if (s[i] != ' ')
      {
        printf("%c", s[i]);
      }
      else
      {
        printf("\n");
      }
      i++;
    }
    return 0;
}
