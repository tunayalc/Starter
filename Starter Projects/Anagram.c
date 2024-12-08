#include <stdio.h>    // Standard input-output functions (printf, scanf)
#include <stdlib.h>   // Library for memory allocation, qsort, etc.
#include <string.h>   // String manipulation functions (strlen, strcmp)
#include <stdbool.h>  // Boolean data type (true/false)

// 📘 **Comparison function for qsort**
// This function sorts the characters of the string in ascending order
int compare(const void *p1, const void *p2) {
    return *(char *)p1 - *(char *)p2; // Subtract ASCII values to determine the order
}

// 📘 **Function to check if two strings are anagrams**
bool isAnagram(char *pStr1, char *pStr2) {
    printf("Length of str1: %lu\n", strlen(pStr1)); // Print the length of the first string
    printf("Length of str2: %lu\n", strlen(pStr2)); // Print the length of the second string

    // Step 1: Check if lengths are different
    if (strlen(pStr1) != strlen(pStr2)) {
        return false; // If lengths are different, they cannot be anagrams
    }

    // Step 2: If strings are exactly the same, they are anagrams
    if (strcmp(pStr1, pStr2) == 0) {
        return true; 
    }

    // Step 3: Sort the characters in both strings
    qsort(pStr1, strlen(pStr1), sizeof(char), compare); 
    qsort(pStr2, strlen(pStr2), sizeof(char), compare); 

    // Step 4: Compare the sorted strings
    if (strcmp(pStr1, pStr2) == 0) {
        return true; // If sorted versions are equal, they are anagrams
    }
    
    return false; // If no condition is met, they are not anagrams
}

int main(int argc, char *argv[]) {
    char str1[100], str2[100]; // Increased array size to handle larger strings
    
    // 📝 **Prompt user for two input strings**
    printf("Enter two strings (separated by a space): ");
    scanf("%99s %99s", str1, str2); // Limit input to prevent buffer overflow
    
    // 📢 **Call the isAnagram function and print the result**
    if (isAnagram(str1, str2)) {
        printf("\nThe strings '%s' and '%s' are anagrams.\n", str1, str2);
    } else {
        printf("\nThe strings '%s' and '%s' are NOT anagrams.\n", str1, str2);
    }

    return 0; // End of program
}
