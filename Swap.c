#include <stdio.h>
void main()
{
  int a, b, temp;
  printf("Enter Two Number to swap");
  scanf("%d%d", &a, &b);
  printf("Number Before Swap a=%d b=%d", a, b); // Swap Using Third Variable
  temp = a;
  a = b;
  b = temp;
  printf("\nNumber after Swap a=%d b=%d", a, b);

  int c, d;
  printf("\nEnter Two Number to swap");
  scanf("%d%d", &c, &d);
  printf("Number Before Swap c=%d d=%d", c, d); // Swap Using Two Variable
  d = c + d;
  c = d - c;
  d = d - c;
  printf("\nNumber after Swap c=%d d=%d", c, d);

  int x, y;
  printf("\nEnter Two Number to swap");
  scanf("%d%d", &x, &y);
  printf("Number Before Swap x=%d y=%d", x, y); // Swap in one line
  x = x ^ y ^ (y = x);
  printf("\nNumber after Swap x=%d y=%d", x, y);
}
