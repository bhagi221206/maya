#include <stdio.h>

int main() {
    int radius;
    float pi = 3.14, area, perimeter;

    // Read radius from input
    scanf("%d", &radius);

    // Calculate area and perimeter
    area = pi * radius * radius;
    perimeter = 2 * pi * radius;

    // Print results with 2 decimal places
    printf("%.2f
", area);
    printf("%.2f
", perimeter);

    return 0;
}
