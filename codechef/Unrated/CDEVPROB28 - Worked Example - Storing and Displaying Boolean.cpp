#include <stdio.h>

int main() {
    // Declare a _Bool variable for availability and set it to true (1)
    _Bool isAvailable = 1;

    // Declare a _Bool variable for closed status and set it to false (0)
    _Bool isClosed = 0;

    // Print the values of isAvailable and isClosed
    printf("isAvailable: %d\n", isAvailable);  // 1 represents true
    printf("isClosed: %d", isClosed);        // 0 represents false

    return 0;
}
