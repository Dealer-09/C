#include <stdio.h>

// Function using call by value - This will NOT swap the original variables
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue function: a = %d, b = %d\n", a, b);
}

// Function using call by reference - This WILL swap the original variables
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swapByReference function: a = %d, b = %d\n", *a, *b);
}

int main() {
    int num1, num2;
    
    printf("Enter two numbers:\n");
    printf("First number: ");
    scanf("%d", &num1);
    printf("Second number: ");
    scanf("%d", &num2);
    
    printf("\n=== Original Values ===\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    
    // Demonstrate call by value (won't swap original values)
    printf("\n=== Call by Value Demonstration ===\n");
    printf("Before calling swapByValue: num1 = %d, num2 = %d\n", num1, num2);
    swapByValue(num1, num2);
    printf("After calling swapByValue: num1 = %d, num2 = %d\n", num1, num2);
    printf("Note: Original values are NOT swapped!\n");
    
    // Demonstrate call by reference (will swap original values)
    printf("\n=== Call by Reference Demonstration ===\n");
    printf("Before calling swapByReference: num1 = %d, num2 = %d\n", num1, num2);
    swapByReference(&num1, &num2);
    printf("After calling swapByReference: num1 = %d, num2 = %d\n", num1, num2);
    printf("Note: Original values ARE swapped!\n");
    
    return 0;
}