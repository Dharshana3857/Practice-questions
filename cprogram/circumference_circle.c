#include <stdio.h>
int main() {
    float radius, circumference;
    float pi = 3.1416;  
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    circumference = pi * 2 * radius;
    printf("circumference of the circle = %.2f\n", circumference);
    return 0;
}

