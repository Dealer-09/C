#include <stdio.h>

int main() {
    int n, i;
    int evenCount = 0, oddCount = 0;
    
    // Get the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Count even and odd numbers
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    printf("\n\nResults:");
    printf("\nTotal Even Numbers: %d", evenCount);
    printf("\nTotal Odd Numbers: %d", oddCount);
    
    return 0;
}