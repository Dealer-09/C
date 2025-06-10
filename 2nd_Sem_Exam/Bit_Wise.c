#include <stdio.h>

// Function to display binary representation of a number
void displayBinary(int num) {
    int bits = sizeof(int) * 8; // Number of bits in an integer
    printf("Binary: ");
    
    for(int i = bits - 1; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
        
        // Add space every 4 bits for readability
        if(i % 4 == 0 && i > 0) {
            printf(" ");
        }
    }
    printf("\n");
}

// Function to perform left shift operation
int leftShift(int number, int positions) {
    return number << positions;
}

int main() {
    int number, positions, result;
    
    printf("=== Bitwise Left Shift Operation ===\n");
    printf("Enter a number: ");
    scanf("%d", &number);
    
    printf("Enter number of positions to shift left: ");
    scanf("%d", &positions);
    
    // Validate positions
    if(positions < 0) {
        printf("Error: Number of positions cannot be negative!\n");
        return 1;
    }
    
    if(positions >= sizeof(int) * 8) {
        printf("Warning: Shifting %d positions may cause overflow!\n", positions);
    }
    
    // Display original number
    printf("\n--- Original Number ---\n");
    printf("Decimal: %d\n", number);
    displayBinary(number);
    
    // Perform left shift operation
    result = leftShift(number, positions);
    
    // Display result
    printf("\n--- After Left Shift by %d positions ---\n", positions);
    printf("Decimal: %d\n", result);
    displayBinary(result);
    
    // Show the mathematical relationship
    printf("\n--- Mathematical Relationship ---\n");
    printf("Left shift by %d positions = Multiply by 2^%d = Multiply by %d\n", 
           positions, positions, 1 << positions);
    printf("Mathematical result: %d × %d = %d\n", number, 1 << positions, number * (1 << positions));
    
    // Show step-by-step shifts (if positions <= 8 for readability)
    if(positions <= 8 && positions > 0) {
        printf("\n--- Step-by-Step Left Shifts ---\n");
        int temp = number;
        for(int i = 1; i <= positions; i++) {
            temp = temp << 1;
            printf("Step %d: %d << 1 = %d\n", i, temp >> 1, temp);
        }
    }
    
    return 0;
}