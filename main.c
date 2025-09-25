#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x;
  int time, min, sec;
  
  printf("Input a second : ");
  scanf("%i", &x);
  
  time = x/3600;
  min = (x%3600)/60;
  sec = x%60;
  
  printf("The time for %i second is %i : %i : %i\n", x, time, min, sec);
  
  system("PAUSE");	
  return 0;
}
