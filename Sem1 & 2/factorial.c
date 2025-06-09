#include <stdio.h>
int main()
{
  int n, fact = 1, i = 1;
  printf("Enter a number to find factorial: ");
  scanf("%d", &n);
  while (i <= n)
  {
    fact *= i;
    i++;
  }
  printf("Factorial is: %d\n", fact);
}
