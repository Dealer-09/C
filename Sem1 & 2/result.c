#include <stdio.h>
int main()
{
  int m, marks;
  printf("Enter marks");
  scanf("%d", &marks);
  m = marks / 10;
  switch (m)
  {
  case 10:
  case 9:
    printf("O");
    break;
  case 8:
    printf("E");
    break;
  case 7:
    printf("A");
    break;
  case 6:
    printf("B");
    break;
  case 5:
    printf("C");
    break;
  case 4:
    printf("D");
    break;
  case 3:
  case 2:
  case 1:
  case 0:
    printf("F");
    break;
  default:
    printf("Invalid");
  }
}