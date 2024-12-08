#include <stdio.h>   // Input-output işlemleri için standart kütüphane
#include <stdlib.h>  // Bellek ayırma (malloc, free) işlemleri için kütüphane

// 📘 **Address Structure** 
// This structure holds the address information of a student.
struct Address {
    char street[50];  // Street name (max 50 characters)
    char city[30];    // City name (max 30 characters)
    int postal_code;  // Postal code (integer)
};

// 📘 **Student Structure** 
// This structure holds student information, including name, number, GPA, and a pointer to an Address.
struct Student {
    char name[50];                 // Student name (max 50 characters)
    int id;                        // Student number (integer)
    float gpa;                     // Grade Point Average (GPA)
    struct Address *address;       // Pointer to the Address structure (dynamic memory)
};

int main() {
    // 📌 **Memory Allocation for the Student**
    // Allocate memory for the student structure using malloc
    struct Student *studentPointer; 
	studentPointer = (struct Student *)malloc(sizeof(struct Student)); 

    // 📌 **Memory Allocation for the Address**
    // Allocate memory for the address structure inside the student structure
    studentPointer->address = (struct Address *)malloc(sizeof(struct Address));

    // 📝 **Input Student Information**
    printf("Enter Student Information:\n");
    printf("Name: ");
    scanf("%s", studentPointer->name);  // Get student name
    printf("ID Number: ");
    scanf("%d", &studentPointer->id);  // Get student ID
    printf("GPA: ");
    scanf("%f", &studentPointer->gpa);  // Get student GPA

    // 📝 **Input Address Information**
    printf("\nEnter Address Information:\n");
    printf("Street: ");
    scanf("%s", studentPointer->address->street);  // Get street name
    printf("City: ");
    scanf("%s", studentPointer->address->city);  // Get city name
    printf("Postal Code: ");
    scanf("%d", &studentPointer->address->postal_code);  // Get postal code

    // 📢 **Print Entered Information**
    printf("\nEntered Information:\n");
    printf("Student Information:\n");
    printf("Name: %s\n", studentPointer->name);  // Print student name
    printf("ID Number: %d\n", studentPointer->id);  // Print student ID
    printf("GPA: %.2f\n", studentPointer->gpa);  // Print student GPA (2 decimal places)
    
    printf("\nAddress Information:\n");
    printf("Street: %s\n", studentPointer->address->street);  // Print street name
    printf("City: %s\n", studentPointer->address->city);  // Print city name
    printf("Postal Code: %d\n", studentPointer->address->postal_code);  // Print postal code

    // 🗑️ **Free Allocated Memory**
    free(studentPointer->address);  // Free the memory for the address
    free(studentPointer);  // Free the memory for the student structure

    return 0;  // End of the program
}
