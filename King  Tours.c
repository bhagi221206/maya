#include <stdio.h>

int main() {
    int N, M;

    // Input: number of 5-seater and 7-seater cars
    scanf("%d %d", &N, &M);

    // Calculate total number of people that can travel
    int total = (N * 5) + (M * 7);

    // Output the result
    printf("%d
", total);

    return 0;
}
