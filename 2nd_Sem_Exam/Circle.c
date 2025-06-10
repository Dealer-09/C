//Calculate the area and circumference of a circle given its radius.
#include <stdio.h>
#define PI 3.14159

// Function to calculate area of circle
float calculateArea(float radius) {
    return PI * radius * radius;
}

// Function to calculate circumference of circle
float calculateCircumference(float radius) {
    return 2 * PI * radius;
}

int main() {
    float radius, area, circumference;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    if(radius < 0) {
        printf("Error: Radius cannot be negative!\n");
        return 1;
    }

    area = calculateArea(radius);
    circumference = calculateCircumference(radius);
    
    printf("Radius: %.2f\n", radius);
    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);
    
    return 0;
}