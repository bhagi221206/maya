#include<stdio.h>
int main()
{
    int x, y;
    int time;
    scanf("%d", &x);
    scanf("%d", &y);
    time = (x * y) / (x + y);
    printf("%d",time);
    return 0;
}

