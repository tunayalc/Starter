#include <stdio.h>   // Standard input-output functions (printf, scanf)
#include <stdlib.h>  // Standard utility functions

// 📘 **Function to Check if a Number is Prime**
// Returns 1 if the number is prime, otherwise returns 0
int is_prime(int number) {
    int i; // Loop variable

    // 📘 **Check for numbers less than 2**
    // 0 and 1 are not prime numbers
    if (number < 2)
        return 0;

    // 📘 **Check divisibility of the number from 2 to sqrt(number)**
    for (i = 2; i * i <= number; i++) { 
        if (number % i == 0) { // If the number is divisible by 'i', it's not prime
            return 0;
        }
    }
    return 1; // If no divisors are found, the number is prime
}

int main(int argc, char *argv[]) {
    int n; // Variable to store the user's input

    // 📝 **User Input**
    printf("Enter a number: ");
    
    // 📘 **Input Validation**
    if (scanf("%d", &n) != 1) { // Check if the input is a valid integer
        printf("Invalid input! Please enter a number.\n"); 
        return 1; // Exit the program with error code 1
    }
    
    // 📘 **Check if the Number is Prime**
    if (is_prime(n) == 0) {
        printf("The number %d is not a prime number.\n", n);
    } else {
        printf("The number %d is a prime number.\n", n);
    }

    return 0; // End of program
}
