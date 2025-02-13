#include <stdio.h>
int main()
{
  int n; // check even odd by switch case
  printf("Enter a no to check even or odd:");
  scanf("%d", &n);
  n = n % 2;
  switch (n)
  {
  case 0:
    printf("Even Number");
    break;
  case 1:
    printf("Even Number");
  }
  int n1, n2, f; // check greatest by switch case
  printf("Enter a no to check even or odd:");
  scanf("%d", &n);
  f = n1 > n2;
  switch (f)
  {
  case 0:
    printf("%d is maximum", n2);
    break;
  case 1:
    printf("%d is maximum", n1);
  }
}