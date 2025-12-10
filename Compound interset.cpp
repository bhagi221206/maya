#include <stdio.h>
#include <math.h>

int main() {
    double P, R, T, CI;

    // Read input values: Principal, Rate, Time
    scanf("%lf %lf %lf", &P, &R, &T);

    // Calculate Compound Interest
    CI = P * pow((1 + R / 100), T) - P;

    // Print result with 2 decimal places
    printf("%.2lf
", CI);

    return 0;
}
