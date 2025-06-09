//Diagonal Matrix
#include <stdio.h>

int main() {
    int matrix[10][10], size;
    //Size of the square matrix
    printf("Enter the size of the square matrix (max 10): ");
    scanf("%d", &size);

    printf("Enter elements of %d x %d matrix:\n", size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nDiagonal Matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j)
                printf("%d ", matrix[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }
    return 0;
}
