#include <stdio.h> 

int main() {
    // Declare float variables to store marks in three subjects
    float subject1 = 85.5;  // Marks of subject1
    float subject2 = 90.0;  // Marks of subject2
    float subject3 = 88.3;  // Marks of subject3

    // Calculate the total marks by adding all three subject scores
    float totalMarks = subject1 + subject2 + subject3;

    // Print the total marks with one decimal point precision
    // %.1f is a format specifier that prints float with 1 digit after decimal
    // (We will cover this output formatting concept in detail in future)
    printf("Total Marks = %.1f\n", totalMarks);

    return 0; 
}
