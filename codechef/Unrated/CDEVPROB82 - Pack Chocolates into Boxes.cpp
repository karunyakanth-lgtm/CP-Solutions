#include <stdio.h>  

int main() {
    // Declare and initialize variable 
    int totalChocolates = 123;     // Total chocolates to be packed
    int boxCapacity = 12;          // Each box can hold 12 chocolates

    // Variables to store the results
    int fullBoxes;                 // Number of full boxes that can be packed
    int remainingChocolates;       // Chocolates left after packing full boxes

    // Calculate number of full boxes using integer division
    fullBoxes = totalChocolates / boxCapacity; 

    // Calculate leftover chocolates that don't fit into full boxes
    remainingChocolates = totalChocolates - (fullBoxes * boxCapacity);  

    // Print all results
    printf("Total Chocolates: %d\n", totalChocolates);    
    printf("Box Capacity: %d\n", boxCapacity);            
    printf("Full Boxes: %d\n", fullBoxes);                
    printf("Remaining Chocolates: %d\n", remainingChocolates);

    return 0; 
}