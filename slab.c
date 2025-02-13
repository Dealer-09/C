#include <stdio.h>
int main()
{
  int units, pay;
  printf("Enter the number of units consumed:");
  scanf("%d", &units);
  if (units <= 200)
    pay = units * 0.50;
  else if (units <= 400)
    pay = 100 + (units - 200) * 0.65;
  else if (units <= 600)
    pay = 250 + (units - 400) * 0.80;
  else
    pay = 425 + (units - 600) * 1.25;
  printf("Total Bill Amount = %d", pay);
}