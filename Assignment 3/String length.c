#include <stdio.h>
#include <string.h>  // Needed for strlen()

int main() {
    // Declare a string variable to hold user input
    char name[100];

    // Welcome message
    printf("=== String Length Calculator ===\n");
    printf("This program will ask for your name and tell you how many characters it has.\n\n");

    // Ask the user to enter a string
    printf("Please enter your name: ");
    scanf("%s", name);  // Reads a single word (no spaces)

    // Print the string back to the user
    printf("\nYou entered: %s\n", name);

    // Calculate and display the length of the string
    int length = strlen(name);
    printf("The length of your name is: %d characters\n", length);

    // Friendly goodbye
    printf("\nThanks for trying this out!\n");

    return 0;
}
