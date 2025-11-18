#include <stdio.h>

int main() {
    // Declare variables to hold user input and results
    int num1, num2;
    int sum, diff, product, mod;
    float quotient;

    // Greet the user and explain the program
    printf("=== Simple Calculator ===\n");
    printf("This program performs basic arithmetic operations on two integers.\n\n");

    // Take input from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Perform arithmetic operations
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;

    // Check for division by zero
    if (num2 != 0) {
        quotient = (float)num1 / num2;
        mod = num1 % num2;
    } else {
        printf("\nOops! Division or modulus by zero is not allowed.\n");
        quotient = 0.0;
        mod = 0;
    }

    // Display the results
    printf("\nResults:\n");
    printf("Addition: %d + %d = %d\n", num1, num2, sum);
    printf("Subtraction: %d - %d = %d\n", num1, num2, diff);
    printf("Multiplication: %d * %d = %d\n", num1, num2, product);

    if (num2 != 0) {
        printf("Division: %d / %d = %.2f\n", num1, num2, quotient);
        printf("Modulus: %d %% %d = %d\n", num1, num2, mod);
    }

    printf("\nThank you for using the calculator!\n");

    return 0;
}
