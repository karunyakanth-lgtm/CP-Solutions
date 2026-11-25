#include <stdio.h>

int main() {
    // Declare the base bill amount and tip amount
    double billAmount = 1000.0;  // in INR
    double tip = 100.0;

    int friends = 5; // Number of friends sharing the bill

    // Calculate the total bill including the tip
    double totalWithTip = billAmount + tip;

    // Calculate each person's share using floating-point division
    double share = totalWithTip / friends;

    // Print the amount
    printf("Total Bill: INR %.2f\n", totalWithTip);
    printf("Each Person Pays: INR %.2f\n", share);

    return 0;
}