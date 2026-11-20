#include <stdio.h>

int main() {
    int R, C, E;
    scanf("%d %d %d", & R, & C, & E); // Input for rows, columns, and extra rows

    int total_cells = (R + E) * C; // Calculate the total number of cells
    printf("%d\n", total_cells); // Output the result

    return 0;
}