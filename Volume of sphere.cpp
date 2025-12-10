#include<stdio.h>
int main()
{
    int R;
    float v, b=4.0/3.0, c=3.14;
    scanf("%d", &R);
    v=b*c*R*R*R;
    printf("%.2f",v);
    return 0;
}

