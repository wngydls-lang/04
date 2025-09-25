#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x;
  int min;
  int sec;
  
  printf("Input the second : ");
  scanf("%i", &x);
  
  min = x/60;
  sec = x%60;
  
  printf("The time is %i : %i\n", min, sec);
  
  system("PAUSE");	
  return 0;
}
