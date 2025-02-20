#include <stdio.h>
int main()
{
  int num, n, revnum = 0, rem;
  printf("Enter a number: ");
  scanf("%d", &n);
  num = n;
  while (n > 0)
  {
    rem = n % 10;
    revnum = revnum * 10 + rem;
    n /= 10;
  }
  if (num == revnum)
    printf("%d is a Palindrome number.\n", num);
  else
    printf("%d is not a Palindrome number.\n", num);
}
