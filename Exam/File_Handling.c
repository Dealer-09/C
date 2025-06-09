#include <stdio.h>
ww
int main() {
    FILE *fptr;
    char name[50];
    int age;

    // Writing to a file
    fptr = fopen("student.txt", "w");  // "w" = write mode
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);

    fprintf(fptr, "Name: %s\nAge: %d\n", name, age);
    fclose(fptr);
    printf("Data written to file.\n");

    // Reading from the file
    fptr = fopen("student.txt", "r");  // "r" = read mode
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char ch;
    printf("\nReading from file:\n");
    while ((ch = fgetc(fptr)) != EOF) {
        putchar(ch);
    }

    fclose(fptr);
    return 0;
}
