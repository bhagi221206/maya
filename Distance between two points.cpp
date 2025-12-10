#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    double distance;

    // Reading input values
    scanf("%d", &x1);
    scanf("%d", &y1);
    scanf("%d", &x2);
    scanf("%d", &y2);

    // Calculating distance using the distance formula
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    // Printing the result rounded to 4 decimal places
    printf("%.4f
", distance);

    return 0;
}
