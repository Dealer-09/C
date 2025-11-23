//S= 1!+2!+3!+...+n!
#include <stdio.h>

// Recursive function to calculate factorial of a number
long long factorial(int n) {
    // Base case
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case
    return n * factorial(n - 1);
}

// Function to calculate the series S = 1! + 2! + 3! + ... + n!
long long calculateSeries(int n) {
    long long sum = 0;
    
    printf("Series calculation:\n");
    for (int i = 1; i <= n; i++) {
        long long fact = factorial(i);
        sum += fact;
        printf("%d! = %lld\n", i, fact);
    }
    
    return sum;
}

int main() {
    int n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    if (n < 1) {
        printf("Error: n must be a positive integer!\n");
        return 1;
    }
    
    printf("\nCalculating series S = 1! + 2! + 3! + ... + %d!\n\n", n);
    
    long long result = calculateSeries(n);
    
    printf("\nSum of series S = %lld\n", result);
    
    return 0;
}