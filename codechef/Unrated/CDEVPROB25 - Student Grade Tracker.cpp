#include <stdio.h>

int main() {
    // Declare and initialize student details
    char grade = 'B';         // Student grade
    int studentID = 20231;    // Unique student ID
    short section = 12;       // Class section number

    // Printing using the '%c' format specifier to print a single character
    printf("Student Grade: %c\n", grade);
    
    // Printing using the '%d' format specifier to print an integer value
    printf("Student ID: %d\n", studentID);
    
    // Printing using the '%d' format specifier to print a short integer value
    printf("Section Number: %d", section);

    return 0;
}
