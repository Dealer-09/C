#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};
int main() {
    
    union Data d;

    d.i = 10;
    printf("d.i = %d\n", d.i);

    d.f = 220.5;
    printf("d.f = %.1f\n", d.f);

    // Overwrites previous values
    strcpy(d.str, "C Programming");
    printf("d.str = %s\n", d.str);

    // Accessing previous members now gives garbage
    printf("After assigning str:\n");
    printf("d.i = %d (garbage)\n", d.i);
    printf("d.f = %.1f (garbage)\n", d.f);

    return 0;
}
