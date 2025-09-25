#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int year;
  int yesorno;
  
  printf("Input year : ");
  scanf("%i", &year);
  
  yesorno = ((year%4 == 0) && (year%100 != 0)) || (year%400 == 0);
  printf("Is the year %i is leaf year? %i\n", year, yesorno);
  
  system("PAUSE");	
  return 0;
}
