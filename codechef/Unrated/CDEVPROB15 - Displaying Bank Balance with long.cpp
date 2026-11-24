#include <stdio.h>

int main() {
    // Declare an int variable for a portion of the balance (in millions)
    int millions = 500; // Represent 500 million 
    
    // Declare a long variable for the total bank balance and assign it the value 10000000
    long bankBalance = 10000000;
    
    // Print the value of millions portion
    printf("Balance in millions: %d million\n", millions);
    
    // Print: "Bank Balance: " followed by the value of bankBalance
    printf("Total Bank Balance: %ld millions", bankBalance);
    
    return 0;
}

