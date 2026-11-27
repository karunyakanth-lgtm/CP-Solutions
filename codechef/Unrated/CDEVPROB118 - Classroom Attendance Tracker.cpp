#include <stdio.h>

int main() {
    int totalStudents = 30;         // Initial number of students
    int earlyLeaves = 4;            // Students who left early
    int absentCorrection = 1;       // Correction for mistakenly counted student

    // Subtract earlyLeaves using -= operator
    totalStudents -= earlyLeaves;
    printf("Students remaining after early leave: %d\n", totalStudents);

    // Subtract absentCorrection using -= operator
    totalStudents -= absentCorrection;
    printf("Corrected remaining students: %d\n", totalStudents);

    // Display value before final decrement using post-decrement
    printf("Students before final adjustment: %d\n", totalStudents--);

    // Final student count after decrement
    printf("Final recorded student count: %d\n", totalStudents);

    return 0;
}
