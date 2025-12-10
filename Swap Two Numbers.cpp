#include <stdio.h>

int main() {
    int a, b;

    // Read two integers from input
    scanf("%d %d", &a, &b);

    // Swap using arithmetic operations
    a = a + b;
    b = a - b;
    a = a - b;

    // Print the swapped values
    printf("%d
%d
", a, b);

    return 0;
}
