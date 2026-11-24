#include <stdio.h>  

int main() {
    // Declare and initialize the variable 
    int ticketPrice = 120;     // Cost of one movie ticket in ₹
    int ticketsSold = 50;      // Total tickets sold
    int expenses = 300;        // Fixed expenses for the day
    int snackEarnings = 500;   // Extra income from snacks
    
    // Calculate gross revenue using multiplication
    int grossRevenue = ticketPrice * ticketsSold; 

    // Subtract expenses from gross revenue to get net revenue
    int revenueAfterExpenses = grossRevenue - expenses;  

    // Add snack earnings to revenueAfterExpenses for final total
    int finalTotal = revenueAfterExpenses + snackEarnings;  

    // Print all the results
    printf("Gross Revenue from Tickets: %d\n", grossRevenue);
    printf("After Expenses: %d\n", revenueAfterExpenses);
    printf("Final Total with Snacks: %d\n", finalTotal);

    return 0;  
}