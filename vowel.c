#include <stdio.h>
int main()
{
  char ch;
  char vowels[] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
  printf("Enter a character: ");
  scanf("%c", &ch);
  if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
  {
    for (int i = 0; i < 10; i++)
    {
      if (ch == vowels[i])
      {
        printf("%c is a vowel", ch);
        return 0;
      }
    }
    printf("%c is a consonant", ch);
  }
  else
    printf("Invalid Input");
}
