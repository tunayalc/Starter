#include <stdio.h>  // Standard input-output functions (printf, scanf)

// 📘 **Function Declaration**
int fibonacci(int n); // Function to compute the n-th Fibonacci number

int main() {
    // 📘 **Variable Declarations**
    int number, i; // Variables to store the number of Fibonacci numbers to print and loop index

    // 📝 **User Input**
    printf("How many Fibonacci numbers do you want to list?\n"); // Ask the user for input
    scanf("%d", &number); // Read the input from the user

    // 📘 **Print Fibonacci Series**
    for (i = 0; i < number; i++) {
        printf("%d\n", fibonacci(i)); // Print the i-th Fibonacci number
    }

    return 0; // End of the program
}

// 📘 **Recursive Fibonacci Function**
int fibonacci(int n) {
    if (n == 0) { 
        return 0; // The 0th Fibonacci number is 0
    } 
    else if (n == 1) { 
        return 1; // The 1st Fibonacci number is 1
    } 
    else { 
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call for Fibonacci calculation
    }
}
