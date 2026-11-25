#include <stdio.h>

int main() {
    // Declare variables for stock quantities of three stores
    int store1Stock, store2Stock, store3Stock;

    // Assign the same initial stock (500 units) to all stores using chained assignment
    store1Stock = store2Stock = store3Stock = 500;

    // Print the stock values for each store
    printf("Store 1 Initial Stock: %d units\n", store1Stock);  // Output: 500
    printf("Store 2 Initial Stock: %d units\n", store2Stock);  // Output: 500
    printf("Store 3 Initial Stock: %d units\n", store3Stock);  // Output: 500

    return 0; 
}