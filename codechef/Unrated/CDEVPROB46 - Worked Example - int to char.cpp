#include <stdio.h>

int main() {
    // Declare and initialize an int variable with a value that is outside the range of char
    int largeValue = 120;  

    // Narrowing conversion from int to char
    char smallValue = largeValue;  

    // Output the values
    printf("Original int value: %d\n", largeValue);  // Prints the original int value (120)
    printf("Converted char value: %c", smallValue);  // Prints the corresponding char value from ASCII table

    return 0;
}