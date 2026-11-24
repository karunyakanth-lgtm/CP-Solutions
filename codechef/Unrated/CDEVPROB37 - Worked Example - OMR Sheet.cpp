#include <stdio.h> // Including the standard I/O library to use printf for output

int main() {
    // Declare multiple char variables in one statement and initialize them
    // q1, q2, q3, q4 are the variables representing answers to questions.
    char q1 = 'd', q2 = 'a', q3 = 'c', q4 = 'a';

    // Output the values of the answers marked
    // The format specifier '%c' is used to print a single character (the answer).
    printf("Question 1 has '%c' as an answer\n", q1);
    printf("Question 2 has '%c' as an answer\n", q2);
    printf("Question 3 has '%c' as an answer\n", q3);
    printf("Question 4 has '%c' as an answer", q4);
    return 0;
}