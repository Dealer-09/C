//Conacinate two strings without strcat()
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[50];
    int i = 0, j = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    // Move to the end of str1
    while (str1[i] != '\0') {
        i++;
    }
    // Append str2 to str1
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
    printf("Concatenated string: %s\n", str1);
    return 0;
}
