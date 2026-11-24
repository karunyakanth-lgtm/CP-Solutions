#include <stdio.h>

int main() {
    // Declare double variable for total price of the box
    double totalPrice = 9999.9999;

    // Declare an int variable to store the total price of the box
    int intTotalPrice;

    // Perform explicit type conversion to int for rounding off
    intTotalPrice = (int) totalPrice;

    // Print the total price in int
    printf("Converted Total Price (int): %d", intTotalPrice);

    return 0;
}
