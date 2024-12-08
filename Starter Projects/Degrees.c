#include <stdio.h>  // Standard input-output library for printf and scanf

int main() {
    // 📘 **Variable Declarations**
    float Fdegree, Cdegree; // Variables to store Fahrenheit and Celsius values

    // 📝 **User Input**
    printf("Enter the temperature in Fahrenheit: "); // Prompt the user to enter the Fahrenheit value
    scanf("%f", &Fdegree); // Read the Fahrenheit value from the user

    // 📘 **Fahrenheit to Celsius Conversion Formula**
    // Celsius = (Fahrenheit - 32) * 5 / 9
    Cdegree = (Fdegree - 32) * 5 / 9; // Apply the formula to convert Fahrenheit to Celsius

    // 📢 **Output**
    printf("The temperature in Celsius is: %.2f\n", Cdegree); // Print the Celsius value (2 decimal places)

    return 0; // End of program
}
