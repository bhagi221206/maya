#include <stdio.h>

int main() {
    int minutes;

    // Read input
    scanf("%d", &minutes);

    // Calculate hours and remaining minutes
    int hours = minutes / 60;
    int remaining_minutes = minutes % 60;

    // Display result
    printf("%d Hour(s) %d Minute(s)
", hours, remaining_minutes);

    return 0;
}
