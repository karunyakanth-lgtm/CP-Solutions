#include <stdio.h> 

int main() {
    // Declare current day and number of days to advance
    int currentDay = 5;      // 5 = Friday (0 = Sunday, 6 = Saturday)
    int daysToAdd = 10;      // Number of days to move forward

    // Add the days to get total offset
    int totalDays = currentDay + daysToAdd;

    // Use modulus to wrap around the 7-day week
    int newDay = totalDays % 7;  // Keeps result in 0–6 range

    // Print the result
    printf("Current Day (0=Sun...6=Sat): %d\n", currentDay);
    printf("Days to Add: %d\n", daysToAdd);
    printf("New Day (0=Sun...6=Sat): %d\n", newDay);

    return 0;
}