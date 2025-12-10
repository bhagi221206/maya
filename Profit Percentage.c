#include <stdio.h>

int main() {
    int CP, SP;
    double profitPercentage;

    // Input: Cost Price and Selling Price
    scanf("%d %d", &CP, &SP);

    // Calculate profit percentage
    profitPercentage = ((double)(SP - CP) / CP) * 100;

    // Output: Print with 2 decimal places
    printf("%.2f
", profitPercentage);

    return 0;
}
