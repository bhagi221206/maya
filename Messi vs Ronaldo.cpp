#include<stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d",&a, &b, &c, &d);
int score1 = (a * 2) + b;
int score2 = (c * 2) + d;
if (score1 > score2)
    
        printf("Messi");
    
    else if (score1 == score2)
    
        printf("Equal");
    
    else
    
        printf("Ronaldo");
    
    return 0;
}
