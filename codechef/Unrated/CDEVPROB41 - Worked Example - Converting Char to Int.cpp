#include <stdio.h>

int main() {
    // Declare and initialize a character variable
    char letter = 'A';

    // Implicit type conversion to int
    int asciiValue = letter;

    // Output the values
    printf("Character: %c\n", letter); // The char 'A' is automatically converted to its ASCII integer value (65)
    
    printf("Converted to ASCII (int): %d", asciiValue);

    return 0;
}
