#include <stdio.h>
#include <string.h>
int main(void)
{
  char firstname[15];
  printf("Enter Your First Name");
  scanf("%s", firstname);
  int l;
  l = strlen(firstname);
  printf("Your first name is: %s\n", firstname);
  printf("The number of characters in your name: %d", l);
}