#include<stdio.h>
#include<string.h>

int main()
{
    double a;
    scanf("%lf",&a);
    double zi=a;
    int mu=1;
    while((int)zi!=(int)(zi+0.999999))
    {
        zi*=10;
        mu*=10;

    }
    printf("%d",(int)zi);
    return 0;
}