#include <stdio.h>
#include <math.h>
int main()
{
  int num, n, remainder, sum = 0, digits = 0;
  printf("Enter a number: ");
  scanf("%d", &num);
  n = num;
  while (n > 0)
  {
    n /= 10;
    digits++;
  }
  n = num;
  while (n > 0)
  {
    remainder = n % 10;
    sum += pow(remainder, digits);
    n /= 10;
  }
  if (sum == num)
    printf("%d is an Armstrong number.\n", num);
  else
    printf("%d is not an Armstrong number.\n", num);

  return 0;
}
