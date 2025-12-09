#include<stdio.h>
int main()
{
    int X;
    scanf("%d", &X);
    if (X%2==0)
    {
        if (X>=2&&X<=5)
        {
            printf("not weird");
        }
        else if (X>=6&&X<=20)
        {
            printf("weird");
        }
        else
        {
            printf("not weird");
        }
    }
    else
    {
        printf("weird");
    }
}
