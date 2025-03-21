#include <stdio.h>

int main() {

    const double PI = 3.14159;   // We dont want PI to ever change
    double radius; // can be a long decimal if big number
    double circumference; 
    double area;

    // User input for the radius of the circle
    printf("\nEnter the radius of your circle: ");
    scanf("%lf", &radius);

    // the maths part
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\nCircumference is: %.1lf", circumference);
    printf("\nThe Area is: %.1lf", area);


    return 0;
}