// Write a program using structure to take 10 students name, roll, marks, and print the records with average marks.

#include <stdio.h>
#include <string.h>
#define SIZE 10

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student students[SIZE];
    float totalMarks = 0.0, average;

    // Input 
    printf("Enter details for %d students:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("\nStudent %d\n", i + 1);
        
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollNo);
        
        printf("Enter Name: ");
        scanf(" %[^\n]", students[i].name);
        
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);

        totalMarks += students[i].marks;
    }
    average = totalMarks / SIZE;

    printf("\n Student Records \n");
    for (int i = 0; i < SIZE; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n",
               students[i].rollNo, students[i].name, students[i].marks);
    }
    printf("\nAverage Marks: %.2f\n", average);
    return 0;
}
