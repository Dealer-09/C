#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int l, b, a;
    printf("Enter Length & Breadth \t"); // Area & Perimeter of Rectangle
    scanf("%d%d", &l, &b);
    printf("\nPerimeter of the rectangle = %d inches", (2 * (l + b)));
    printf("\nAreia of the rectangle = %d Square inches", (l * b));
    printf("\nEnter a number to divide by 3 ");
    scanf("%d", &a);
    printf("\nQuotient: %d\nRemainder: %d", (a / 3), (a % 3));
    printf("\n***************************\n|                         |\n|  Academy of Technology  |\n|                         |\n***************************");
    printf("\nSingle Quote: \'\nDouble Quote: \"");
    printf("\n\"Academy\"");
    printf("\nA\n   c\n      a\n         d\n            m\n               e\n                   y");
    printf("\nD:\\\\abc\\\\xyz.txt");
}