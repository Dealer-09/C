#include <stdio.h>
int main(void)
{
  int x, n, n1;
  printf("Enter Temperature in celsius\n"); // q2
  scanf("%d", &x);
  printf("Temperature in Farenheit is %.2f", ((x * 9.0 / 5.0) + 32));
  printf("\nEnter a 3 digit number ");
  scanf("%d", &n);
  if (n < 1000 && n > 99)
    printf("Sum of each digit %d", ((n / 100) + ((n % 100) / 10) + (n % 10)));
  else
    printf("Enter a valid input");
}