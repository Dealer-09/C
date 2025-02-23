#include <stdio.h>
int main()
{
  int n;
  printf("Enter a number to find factorial: ");
  scanf("%d", &n);
  printf("Factors are: ");
  for (int i = 1; i < n; i++)
  {
    if (n % i == 0)
      printf("%d,", i);
  }
}