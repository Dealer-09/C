#include <stdio.h>
int main() {
    int n;
    double sum = 0.0, m = 0.0;
    printf("Enter the number up to which you want to calculate the sum: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
    {
        m = 1.0 / i;
        sum += m;   
    }
    printf("Sum of series is: %lf\n", sum);
}
