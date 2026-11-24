#include <stdio.h>  

int main() {
    // Declare and assign calories for three meals
    int breakfast = 350;  // Calories from breakfast
    int lunch = 600;      // Calories from lunch
    int dinner = 500;     // Calories from dinner

    // Declare and assign calories burned during exercise
    int burned = 400;     // Calories burned through physical activity

    // Calculate the total calories consumed
    int totalCalories = breakfast + lunch + dinner;

    // Calculate the net calorie intake after exercise
    int netCalories = totalCalories - burned;

    // Print the total, burned, and net calorie values
    printf("Total Calories Consumed: %d\n", totalCalories);
    printf("Calories Burned: %d\n", burned);
    printf("Net Calorie Intake: %d\n", netCalories);

    return 0;  
}