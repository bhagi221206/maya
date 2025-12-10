#include <stdio.h>

int main() {
    int side;

    // Input: Read the side of the cube
    scanf("%d", &side);

    // Constraints check (optional)
    if (side < 1 || side > 1000) {
        printf("Invalid input. Side must be between 1 and 1000.
");
        return 1;
    }

    // Calculations
    int surface_area = 6 * side * side;
    int volume = side * side * side;

    // Output
    printf("Surface area = %d and Volume = %d
", surface_area, volume);

    return 0;
}
