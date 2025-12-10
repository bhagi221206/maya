#include <stdio.h>

int main() {
    int X, Y;

    // Input: number of stoves and minutes
    scanf("%d %d", &X, &Y);

    // Each stove cooks 1 packet per minute
    // Total packets = X stoves × Y minutes
    int totalPackets = X * Y;

    // Output: number of customers served
    printf("%d
", totalPackets);

    return 0;
}
