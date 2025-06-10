//Length of an array using pointer arithmetic
#include <stdio.h>

// Function to calculate array length using pointer arithmetic
int getArrayLength(int *start, int *end) {
    return end - start;
}

// Function to display array elements using pointers
void displayArray(int *arr, int length) {
    printf("Array elements: ");
    for(int i = 0; i < length; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Calculate array length using pointer arithmetic
    int *start = arr;           // Pointer to first element
    int *end = arr + n;         // Pointer to one past the last element
    
    int length = getArrayLength(start, end);
    
    displayArray(arr, length);
    printf("Array length calculated using pointer arithmetic: %d\n", length);
    
    printf("Start address (arr): %p\n", (void*)start);
    printf("End address (arr + %d): %p\n", n, (void*)end);
    printf("Difference (end - start): %ld\n", (long)(end - start));
    printf("Size of each element: %zu bytes\n", sizeof(int));
    printf("Total array size: %zu bytes\n", n * sizeof(int));
    
    return 0;
}