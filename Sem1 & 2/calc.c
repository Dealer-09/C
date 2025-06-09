#include <stdio.h>
int main()
{
  int x, n;
  printf("Enter a number to select operation:");
  scanf("%d", &n);
  printf("\nEnter another number:");
  scanf("%d", &x);
  if (n > 3 || n < 1)
    printf("Y= %d", 1 + n * x);
  switch (n)
  {
  case 1:
    printf("Y= %d", 1 + x * x);
    break;
  case 2:
    printf("Y= %d", 1 + x / n);
    break;
  case 3:
    printf("Y= %d", 1 + 2 * x);
    break;
  }
}