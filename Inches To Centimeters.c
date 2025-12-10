#include <stdio.h>

int main() {
    int inches;
    float centimeters;

    // Read height in inches
    scanf("%d", &inches);

    // Convert to centimeters
    centimeters = inches * 2.54;

    // Output with 2 decimal places
    printf("%.2f
", centimeters);

    return 0;
}
