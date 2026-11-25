#include <stdio.h>

int main() {
    // Initialize the number of boxes
    int units = 15;  // Start with 15 boxes

    // Multiply units by 4 to get total products (4 units per box)
    units *= 4;  // units = 15 * 4 = 60

    // Distribute the total units equally among 5 delivery trucks
    units /= 5;  // units = 60 / 5 = 12 units per truck

    // Check if there are any leftover units when grouped in 3s
    units %= 3;  // units = 12 % 3 = 0 (no leftover)

    // Print the number of leftover units after delivery
    printf("Units Left Over After Delivery: %d\n", units);  

    return 0;
}