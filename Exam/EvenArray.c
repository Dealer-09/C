//C program that takes an array of integers, adds all the even numbers, and prints the result.
#include <stdio.h>
int main() {
    int arr[100], n, sum = 0;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    //input
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Add even numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    printf("Sum of even numbers in the array = %d\n", sum);
    return 0;
}
