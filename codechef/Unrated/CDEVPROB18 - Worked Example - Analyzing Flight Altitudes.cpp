#include <stdio.h>

int main() {
    // Declare a float variable for average flight altitude
    float avgAltitude = 35000.75f;  

    // Declare a double variable for the highest recorded altitude
    double maxAltitude = 45367.0987654321;  

    // %f is used here to print floating-point values in C (for both 'float' and 'double' types).
    // By default, the precision is 6 decimal places for both 'float' and 'double' types when using %f
    printf("Average Flight Altitude (float): %f\n", avgAltitude);  // Output will be up to 6 decimal places

    // Similar to the float, it will also print the 'double' value with 6 decimal places by default.
    printf("Maximum Flight Altitude (double): %f", maxAltitude);  

    return 0;
}
