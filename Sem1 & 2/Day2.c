#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    printf("Archisman Pal\n");
    int l, b, r, n, s1, s2, s3, A, B, C, x, y;
    float fahrenheit, S;
    printf("Enter Length & Breadth \t"); // Area & Perimeter of Rectangle or square
    scanf("%d%d", &l, &b);
    printf("Area is\t%d", (l * b));
    if (l == b)
        printf("\nPerimeter is\t%d", (4 * l));
    else
        printf("\nPerimeter is\t%d", (2 * (l + b)));
    printf("\nEnter Radius\t"); // Area & Perimeter of Circle
    scanf("%d", &r);
    printf("\nArea of circle radius %d is %f", r, (3.14 * (r * r)));
    printf("\nPerimeter is\t%f", (2 * 3.14 * r));
    printf("\nEnter a negative number\t"); // absolute value of a num
    scanf("%d", &n);
    printf("\nPositive Equivalent is\t%d", abs(n));
    printf("\nSquare of a number %d is %d", n, (n * n)); // Square of a number
    if (n % 2 == 0)                                      // even or odd
        printf("\nIt is a Even Number");
    else
        printf("\nIt is a odd number");
    printf("\nEnter Sides of a triangle\t"); // Type of Triangle
    scanf("%d%d%d", &s1, &s2, &s3);
    if (s1 == s2 && s1 == s3)
        printf("It is a Equilateral triange");
    else if (s1 == s2 || s1 == s3 || s2 == s3)
        printf("It is a Isoceles triange");
    else
        printf("It is a Scalene triange");
    printf("\nEnter Points of a triangle\t"); // Area Of a triangle
    scanf("%d%d%d", &A, &B, &C);
    S = ((A + B + C) / 2);
    printf("\nArea is %f", sqrt(S * (S - A) * (S - B) * (S - C)));
    printf("\nEnter Two number\t"); // Comparison of two numbers
    scanf("%d%d", &x, &y);
    if (x == y)
        printf("\nNumbers are Equal");
    else if (x > y)
        printf("\n%d is greater than %d", x, y);
    else
        printf("\n%d is greater than %d", y, x);
    printf("\nEnter Temperature in Fahrenheit\t"); // Fahreheit to celsius
    scanf("%f", &fahrenheit);
    printf("\nEquivalent Temperature in Celsius %f", ((fahrenheit - 32) * 5.0 / 9.0));
}