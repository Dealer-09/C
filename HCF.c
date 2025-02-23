#include <stdio.h>
int main()
{
  int n1, n2, gcd = 1, i = 1;
  printf("Enter Two Numbers to get their HCF: ");
  scanf("%d%d", &n1, &n2);
  while (i <= n1 && i <= n2)
  {
    if (n1 % i == 0 && n2 % i == 0)
      gcd = i;
    i++;
  }

  printf("HCF is %d\n", gcd);
  return 0;
}
