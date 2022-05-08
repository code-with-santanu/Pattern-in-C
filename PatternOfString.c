/*Pattern of a string.  ex:input:hello; output: h
                        he
                        hel
                        hell
                        hello
*/

#include <stdio.h>
#include <string.h>
int main()
{
  int i, j;
  char w[20];
  printf("Enter any word");
  scanf("%s", &w);

  for (i = 0; i < strlen(w); i++)
  {
    for (j = 0; j <= i; j++)
    {
      printf("%c", w[j]);
    }
    printf("\n");
  }

  return 0;
}