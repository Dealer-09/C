#include <stdio.h>
int main(void)
{
  int x, y, z;
  printf("Enter three variables ");
  scanf("%d%d%d", &x, &y, &z);
  printf("Max number = %d", (x > y ? (x > z ? x : z) : (y > z ? y : z)));
  printf("\nMinimum number = %d", (x < y ? (x < z ? x : z) : (y < z ? y : z)));
}