#include <stdio.h>

int main() {
    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);

    // Calculate how many mangoes can be added without exceeding bridge limit
    int max_mangoes = (Z - Y) / X;

    printf("%d
", max_mangoes);
    return 0;
}
