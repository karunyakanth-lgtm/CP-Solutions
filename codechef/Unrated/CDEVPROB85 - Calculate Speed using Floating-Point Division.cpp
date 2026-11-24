#include <stdio.h> 

int main() {
    // Declare and initialize distance (in kilometers) and time (in hours)
    double distance = 1350.0;  // Total distance to be traveled
    double time = 2.54;        // Total time taken in hours

    // Declare an integer to divide the distance equally
    int divider = 4;           // Used to test division with a mix of double and int

    // Perform floating-point division to calculate speed and segment distance
    double speed = distance / time;            
    double dividedDistance = distance / divider; 

    // Print the results with 2 digits after the decimal point
    printf("Speed = %.2f km/h\n", speed);          
    printf("Divided Distance = %.2f km\n", dividedDistance);

    return 0; 
}