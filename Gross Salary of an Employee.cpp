#include <stdio.h>

int main() {
    float salary, hra, da, pf, gross;

    // Read input values
    scanf("%f", &salary);
    scanf("%f", &hra);
    scanf("%f", &da);

    // Calculate PF (12% of Basic Salary)
    pf = 0.12f * salary;

    // Calculate Gross Salary
    gross = salary + hra + da + pf;

    // Print PF and Gross Salary
    printf("%.2f
", pf);
    printf("%.2f
", gross);

    return 0;
}
