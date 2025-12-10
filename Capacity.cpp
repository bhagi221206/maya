#include <stdio.h>

int main() {
    int T, S, B;
    
    // Read input values for T, S, B
    scanf("%d %d %d", &T, &S, &B);

    // Each block has 512 bytes
    // Total capacity in bytes = 2 surfaces × T tracks × S sectors × B blocks × 512 bytes
    int capacity_bytes = 2 * T * S * B * 512;

    // Convert bytes to kilobytes (1 KB = 1024 bytes)
    int capacity_kb = capacity_bytes / 1024;

    // Output the result
    printf("%d KB
", capacity_kb);

    return 0;
}
