#include <stdio.h>
#define PI 3.14159  // Define a constant for π

int main() {
    // Declare variable to hold the radius
    float radius;

    // Declare variable to hold the surface area
    float surfaceArea;

    // Welcome message
    printf("=== Surface Area of a Sphere Calculator ===\n");
    printf("This program calculates the surface area of a sphere using the formula: 4πr²\n\n");

    // Ask the user to enter the radius
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    // Calculate the surface area
    surfaceArea = 4 * PI * radius * radius;

    // Display the result
    printf("\nThe surface area of the sphere is: %.2f square units\n", surfaceArea);

    // Friendly goodbye
    printf("Thanks for using the calculator. Have a great day!\n");

    return 0;
}
