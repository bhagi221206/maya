#include <stdio.h>

int main() {
    int base, height;
    
    // Read base and height from user input
    scanf("%d %d", &base, &height);

    // Calculate area
    int area = (base * height) / 2;

    // Print the result
    printf("%d
", area);

    return 0;
}
