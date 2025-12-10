#include <stdio.h>

int main() {
    int X, Y;

    // Read average (X) and first number (Y)
    scanf("%d %d", &X, &Y);

    // Calculate second number using: second = 2 * average - first
    int second = 2 * X - Y;

    // Output the result
    printf("%d
", second);

    return 0;
}
