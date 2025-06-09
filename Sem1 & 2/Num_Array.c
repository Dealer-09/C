#include <stdio.h>
int main()
{
  int size, max, min;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &size);
  int num[size];
  printf("Enter %d numbers:\n", size);
  for (int i = 0; i < size; i++)
  {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &num[i]);
    if (i == 0)
      min = max = num[i];
    else
    {
      if (num[i] < min)
        min = num[i];
      if (num[i] > max)
        max = num[i];
    }
  }
  printf("The Highest Number is: %d\n", max);
  printf("The Lowest Number is: %d\n", min);
}
