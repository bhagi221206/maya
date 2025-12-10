#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);  // Input the year

    int lastTwo = year % 100;  // Get last two digits

    printf("%02d
", lastTwo);  // Print with leading zero if needed

    return 0;
}
