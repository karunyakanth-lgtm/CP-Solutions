#include <stdio.h>

int main() {
    int tokensLeft = 13;  // Total tokens available

    // Issue token to User A
    printf("Token issued to User A: %d\n", tokensLeft--);

    // Issue token to User B
    printf("Token issued to User B: %d\n", tokensLeft--);

    // Display remaining tokens
    printf("Tokens left after issuing: %d\n", tokensLeft);

    return 0;
}
