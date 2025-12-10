#include <stdio.h>

int main() {
    int total_seconds;
    int hours, minutes, seconds;

    // Read input
    scanf("%d", &total_seconds);

    // Convert to hours, minutes, seconds
    hours = total_seconds / 3600;
    total_seconds %= 3600;
    minutes = total_seconds / 60;
    seconds = total_seconds % 60;

    // Display result
    printf("H:M:S-%d:%d:%d
", hours, minutes, seconds);

    return 0;
}
