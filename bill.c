#include <stdio.h>
int main()
{
  int prev, current, units;
  float bill_amount, rate_unit = 3.75;
  printf("Enter Previous Reading: ");
  scanf("%d", &prev);
  printf("Enter Current Reading: ");
  scanf("%d", &current);
  units = current - prev;
  bill_amount = units * rate_unit;
  printf("\nUnits Consumed=%d\n:", units);
  printf("Rate Per Unit: Rs%.2f\n:", rate_unit);
  printf("Total Bill Amount: Rs%.2f\n:", bill_amount);
}
