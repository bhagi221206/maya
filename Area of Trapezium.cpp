#include <stdio.h>

int main() {
    int base1, base2, height;
    float area;

    // Reading inputs
    scanf("%d", &base1);
    scanf("%d", &base2);
    scanf("%d", &height);

    // Calculating area
    area = 0.5 * (base1 + base2) * height;

    // Printing result with 4 decimal places
    printf("%.4f
", area);

    return 0;
}
