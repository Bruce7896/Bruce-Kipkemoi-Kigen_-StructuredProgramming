#include <stdio.h>
#include <string.h>

#define CORRECT_PIN "7896"

float balance = 920000.0; // Starting balance

// Function declarations
int login();
void showMenu();
void checkBalance();
void deposit();
void withdraw();

int main() {
    printf("Welcome to the ATM System\n");

    if (!login()) {
        printf("Too many incorrect attempts. Exiting the ATM system menu...\n");
        return 0;
    }

    int choice;
    do {
        showMenu();
        printf("Enter your choice: ");
        scanf("%i", &choice);

        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}

// Function to handle PIN login
int login() {
    char pin[10];
    int attempts = 0;

    while (attempts < 3) {
        printf("Enter your PIN: ");
        scanf("%s", pin);

        if (strcmp(pin, CORRECT_PIN) == 0) {
            printf("Login successful!\n");
            return 1;
        } else {
            attempts++;
            printf("Incorrect PIN. Attempts left: %d\n", 3 - attempts);
        }
    }

    return 0;
}

// Function to display menu
void showMenu() {
    printf("\n--- ATM Menu ---\n");
    printf("1. Balance Inquiry\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
}

// Function to check balance
void checkBalance() {
    printf("Your current balance is: KES %.2f\n", balance);
}

// Function to deposit money
void deposit() {
    float amount;
    printf("Enter amount to deposit: KES ");
    scanf("%f", &amount);

    if (amount > 0) {
        balance += amount;
        printf("Deposit successful. New balance: KES %.2f\n", balance);
    } else {
        printf("Invalid amount. Deposit failed.\n");
    }
}

// Function to withdraw money
void withdraw() {
    float amount;
    printf("Enter amount to withdraw: KES ");
    scanf("%f", &amount);

    if (amount > 0 && amount <= balance) {
        balance -= amount;
        printf("Withdrawal successful. New balance: KES %.2f\n", balance);
    } else if (amount > balance) {
        printf("Insufficient balance. Withdrawal failed.\n");
    } else {
        printf("Invalid amount. Withdrawal failed.\n");
    }
}
