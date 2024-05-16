#include<stdio.h>
int a[3]={1,2,5};
int dp(int x)
{
    int min=999;
    for(int i=0;i<3;i++)
    {
        if(x==a[i])
        {
            return 1;
        }
        else if(x>a[i])
        {
            if(dp(x-a[i])<min)
            {
                min=dp(x-a[i]);
            }
        }
    }
    return min+1;
}