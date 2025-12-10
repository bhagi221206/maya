#include <stdio.h>
#include <stdlib.h> // for abs()

int main() {
    int A, B;
    
    // Read two integers from input
    scanf("%d %d", &A, &B);
    
    // Calculate correct and incorrect results
    int correct = A + B;
    int incorrect = A * B;
    
    // Calculate and print the absolute difference
    int difference = abs(correct - incorrect);
    printf("%d
", difference);
    
    return 0;
}
