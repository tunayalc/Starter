#include <stdio.h>   // Standard input-output functions (printf, scanf)
#include <stdlib.h>  // Standard utility functions

int main() {
    // 📘 **Variable Declarations**
    int x, factorial; // Variables for the input number and the calculated factorial
    factorial = 1;    // Initialize factorial to 1 because the factorial of 0 or 1 is 1

    // 📝 **User Input**
    printf("Please enter a value for x: "); // Ask the user to enter a number
    scanf("%d", &x); // Read the user's input and store it in the variable x

    // 📘 **Factorial Calculation**
    // Use a while loop to calculate factorial
    while (x > 1) { 
        factorial = factorial * x; // Multiply the current value of factorial by x
        x--; // Decrease x by 1
    }

    // 📢 **Output**
    printf("The factorial is: %d\n", factorial); // Print the calculated factorial

    return 0; // End of the program
}
