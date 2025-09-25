#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x, y;
  
  printf("Input two integers : ");
  scanf("%i %i", &x, &y);
  
  printf("+ result : %i\n", x+y);
  printf("- result : %i\n", x-y);
  printf("* result : %i\n", x*y);
  printf("/ result : %i\n", x/y);
  printf("%% result : %i\n", x%y);
  
  system("PAUSE");	
  return 0;
}
