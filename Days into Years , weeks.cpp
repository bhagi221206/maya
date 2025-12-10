#include <stdio.h>

int main() {
    int D;         // Total number of days
    int years;     // Number of years
    int weeks;     // Number of weeks

    // Read the number of days
    scanf("%d", &D);

    // Calculate years and weeks
    years = D / 365;
    weeks = (D % 365) / 7;

    // Output the result
    printf("%d
", years);
    printf("%d
", weeks);

    return 0;
}
