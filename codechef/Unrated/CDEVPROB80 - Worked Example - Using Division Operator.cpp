#include <stdio.h>  

int main() {
    // Declare and initialize the variable 
    int totalApples = 17;  // Total apples to be distributed
    int students = 4;      // Number of students to share apples

    // Perform integer division to find apples per student
    // Since both values are integers, the result will also be an integer (decimal part discarded)
    int applesPerStudent = totalApples / students;  

    // Print how many apples each student gets
    printf("Each student gets %d apples\n", applesPerStudent);

    return 0;
}