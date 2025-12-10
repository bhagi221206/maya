#include <stdio.h>

int main() {
    int A, B;

    // Read input values for A and B
    scanf("%d %d", &A, &B);

    // Calculate number of special attacks
    int attacks = B / A;

    // Print the result
    printf("%d
", attacks);

    return 0;
}
