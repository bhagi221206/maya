#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // Check for triangle validity
    if (a + b > c && a + c > b && b + c > a) {
        double s = (a + b + c) / 2.0;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("%.4f
", area);
    } else {
        printf("0.0000
");
    }

    return 0;
}
