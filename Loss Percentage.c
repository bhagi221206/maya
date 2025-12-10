#include <stdio.h>

int main() {
    float cp, sp, loss, loss_percent;

    // Read input
    scanf("%f %f", &cp, &sp);

    // Calculate loss
    loss = cp - sp;

    // Calculate loss percentage
    loss_percent = (loss / cp) * 100;

    // Print result with 2 decimal places
    printf("%.2f
", loss_percent);

    return 0;
}
