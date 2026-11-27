#include <stdio.h>

int main() {
    int issueCount = 0;  // Initialize book issue counter

    // Issue books to students and print the issue number before incrementing
    printf("Book issued to student A. Issue number: %d\n", issueCount++);
    printf("Book issued to student B. Issue number: %d\n", issueCount++);
    printf("Book issued to student C. Issue number: %d\n", issueCount++);
    printf("Book issued to student D. Issue number: %d\n", issueCount++);

    return 0;
}
