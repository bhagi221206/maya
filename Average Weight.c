#include <stdio.h>

int main() {
    int average, w1, w2, w3;

    // Input: average weight, weight of boy1, weight of boy2
    scanf("%d %d %d", &average, &w1, &w2);

    // Calculate weight of third boy
    w3 = 3 * average - (w1 + w2);

    // Output the result
    printf("%d
", w3);

    return 0;
}
