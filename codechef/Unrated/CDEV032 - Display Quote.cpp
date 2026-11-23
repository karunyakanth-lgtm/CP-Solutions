#include <stdio.h>

int main() {
    {
        // Display the quote title with double quotes using escape sequence
        printf("Displaying a famous quote:\n");
    }
    {
        /*
           Multi-line comment:
           This block prints a quote with proper formatting.
           It includes tab spacing, new lines, and escaped characters like double quotes.
        */
        printf("\t\"Success is not final,\n");
        printf("\tfailure is not fatal:\n");
        printf("\tIt is the courage to continue that counts.\"\n");
    }

    return 0;
}