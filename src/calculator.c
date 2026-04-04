#include <stdio.h>   // Standard input-output functions (printf, scanf)
#include <stdlib.h>  // Standard utility functions

int main() {
    // 📘 **Variable Declarations**
    float number1, number2, result; // Variables to store two numbers and the result
    char operation[100]; // Variable to store the operation input as a string

    // 📝 **User Input for the First Number**
    printf("Enter the first number: ");
    scanf("%f", &number1); // Take the first number as input

    // 📝 **User Input for the Operation**
    printf("Enter an operation (+, -, *, /): ");
    scanf("%s", operation); // Take the operation as input (e.g., +, -, *, /)

    // 📝 **User Input for the Second Number**
    printf("Enter the second number: ");
    scanf("%f", &number2); // Take the second number as input

    // 📘 **Switch Statement to Perform the Operation**
    switch (operation[0]) { // Check the first character of the operation
        case '+': // If the operation is '+'
            result = number1 + number2; // Add the two numbers
            printf("Result: %f\n", result); // Print the result
            break;
        case '-': // If the operation is '-'
            result = number1 - number2; // Subtract the second number from the first
            printf("Result: %f\n", result); // Print the result
            break;
        case '*': // If the operation is '*'
            result = number1 * number2; // Multiply the two numbers
            printf("Result: %f\n", result); // Print the result
            break;
        case '/': // If the operation is '/'
            if (number2 != 0) { // Check for division by zero
                result = number1 / number2; // Divide the first number by the second
                printf("Result: %f\n", result); // Print the result
            } else {
                printf("Error: Division by zero is not allowed.\n"); // Print error message
            }
            break;
        default: // If the operation is not one of the four valid operations
            printf("Error: Invalid operation.\n"); // Print error message
            break;
    }

    return 0; // End of the program
}
