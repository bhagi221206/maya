#include <stdio.h>

int main() {
    int X, Y, Z;
    
    // Read input values
    scanf("%d", &X); // Number of 5 rupee coins
    scanf("%d", &Y); // Number of 10 rupee coins
    scanf("%d", &Z); // Cost of each chocolate

    // Calculate total money Romeo has
    int total_money = (5 * X) + (10 * Y);

    // Calculate maximum number of chocolates
    int chocolates = total_money / Z;

    // Output the result
    printf("%d
", chocolates);

    return 0;
}
