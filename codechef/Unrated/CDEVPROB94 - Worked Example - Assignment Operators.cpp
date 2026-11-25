#include <stdio.h>  

int main() {
    // Simple Assignment
    int number = 20;  // Assign 20 to variable 'number'
    printf("After simple assignment: %d\n", number);

    // Addition Assignment
    number += 10;  // Adds 10 to current value (20 + 10 = 30)
    printf("After addition assignment (+= 10): %d\n", number);

    // Subtraction Assignment
    number -= 4;  // Subtracts 4 from current value (30 - 4 = 26)
    printf("After subtraction assignment (-= 4): %d\n", number);

    return 0;
}