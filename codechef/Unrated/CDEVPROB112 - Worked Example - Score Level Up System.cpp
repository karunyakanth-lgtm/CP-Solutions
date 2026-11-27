#include <stdio.h>

int main() {
    int level = 3;  // Initial player level

    // Pre-increment: increase level first, then display
    printf("Player leveled up to: %d\n", ++level);
    printf("Current level: %d\n", level);

    return 0;
}
