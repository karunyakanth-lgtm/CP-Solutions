#include <stdio.h>

int main() {
    // Declare and initialize total number of candies and number of children 
    int totalCandies = 53; // Total candies available 
    int children = 6; // Number of children to share candies with

    // Use modulus operator to calculate how many candies will remain undistributed
    int leftover = totalCandies % children; // Remainder after equal distribution

    // Print the result
    printf("After distributing %d candies among %d children,\n", totalCandies, children);
    printf("Candies left: %d\n", leftover); 

    return 0;
}