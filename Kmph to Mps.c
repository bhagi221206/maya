#include <stdio.h>

int main() {
    int speed_kmph;
    float speed_mps;

    // Read input
    scanf("%d", &speed_kmph);

    // Convert kmph to mps: 1 kmph = 5/18 mps
    speed_mps = speed_kmph * (5.0 / 18.0);

    // Print result with 2 decimal places
    printf("%.2f
", speed_mps);

    return 0;
}
