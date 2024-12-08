#include <stdio.h>   // Standard input-output library
#include <string.h>  // String functions for string manipulation

// 📘 **Function to print the reverse of a given word**
void PrintReverse(char word[5]){ 
    char reverse[5];  // Array to store the reversed version of the word
    int i;
    
    // Loop to reverse the letters of the word
    for(i = 0; i < 5; i++){ 
        reverse[i] = word[4 - i]; // Take letters from end to start
    }
    
    reverse[5] = '\0'; // Null-terminate the string
    printf("Reversed Word: %s\n", reverse); // Print the reversed word
}

// 📘 **Function to count the number of vowels in a given word**
void CountVowels(char word[5]){
    int i, count = 0; // Counter for the number of vowels

    // Loop through each character of the word
    for(i = 0; i < 5; i++){
        // Check if the character is a vowel (a, e, i, o, u)
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'u' || word[i] == 'i' || word[i] == 'o'){
            count++; // Increment the counter if it's a vowel
        }
    }

    printf("Number of vowels: %d\n", count); // Print the total count of vowels
}

int main(void){
    char word[5];  // Array to store the user's input (maximum 4 letters + null character)

    // Prompt the user to enter a word
    printf("Enter a 4-letter word: ");
    scanf("%4s", word); // Limit input to 4 characters to avoid buffer overflow

    // Call the function to print the reversed word
    PrintReverse(word);

    // Call the function to count the number of vowels in the word
    CountVowels(word);    

    return 0; // Indicate successful program termination
}

