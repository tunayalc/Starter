#include <stdio.h>   // Standard input-output functions (printf, scanf)
#include <stdlib.h>  // Standard utility functions

int main() {
    // 📘 **Variable Declarations**
    int adminKey = 123; // Correct password (admin key)
    int attemptsLeft = 3; // Number of attempts allowed
    int enteredKey; // Variable to store the user's entered password

    // 📘 **Password Entry Loop**
    while (attemptsLeft > 0) {
        // 📝 **Prompt User for Password**
        printf("Please enter the password: "); 
        scanf("%d", &enteredKey); // Read the entered password
        attemptsLeft--; // Decrease the remaining attempts
        printf("Remaining attempts: %d\n", attemptsLeft); // Show remaining attempts

        // 📘 **Check if Password is Correct**
        if (enteredKey == adminKey) { // Check if entered password matches adminKey
            printf("Access granted.\n"); // Print success message
            break; // Exit the loop if password is correct
        } 
        else {
            printf("Access denied.\n"); // Print failure message
        }
    }

    if (attemptsLeft == 0) { 
        printf("No attempts left. Access locked.\n"); // If all attempts are used, print this message
    }

    return 0; // End of program
}
