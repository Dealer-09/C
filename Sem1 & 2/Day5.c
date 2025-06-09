#include <stdio.h>
int main(void)
{
  int a, b, n, one, two, max, min;
  char ch;
  printf("Enter two numbers\n"); // Swaping by XOR
  scanf("%d%d", &a, &b);
  printf("Before Swap are A=%d B=%d", a, b);
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
  printf("\nAfter Swap are A=%d B=%d", a, b);
  printf("Enter a number to show it's 1's && 2's Complement"); // binary 1's & 2's complement
  scanf("%d", &n);
  one = n;
  two = one + 1;
  printf("\n 1's Complement= %d \t2's Complement= %d", one, two);
  printf("Enter Two Number To Compare"); // Comparing two numbers by XOR
  min = (b ^ (a ^ b) & -(a < b));
  max = (a ^ (a ^ b) & -(a < b));
  printf("Maximum Number is %d", max);
  printf("Minimum Number is %d", min);
}
/*
 printf("Enter a Character: "); // Covert Cases
  scanf("%c", &ch);
  printf("Lowecase: %c", toLowerCase(ch));
  printf("Uppercase: %c", toUpperCase(ch));
char toLowerCase(char ch)
{
  return ch | ' ';
}
char toUpperCase(char ch)
{
  return ch & '_';
}
*/