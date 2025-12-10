#include <stdio.h>

int main() {
    int side;
    
    // Read input
    scanf("%d", &side);
    
    // Check constraints
    if (side >= 1 && side <= 20) {
        int area = side * side;
        int perimeter = 4 * side;
        
        // Print output
        printf("%d %d
", area, perimeter);
    } else {
        printf("Invalid input. Side must be between 1 and 20.
");
    }

    return 0;
}
