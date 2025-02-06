#include <stdio.h>
void main()
{
  int y;
  printf("Enter a year to check whether it is a Leap Year or not");
  scanf("%d", &y);
  if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
    printf("Leap Year");
  else
    printf("Not Leap Year");
}
