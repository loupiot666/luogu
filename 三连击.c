#include<stdio.h>
#include<stdbool.h>

int main()
{
    
    for(int i=123;i<333;i++)
    {
        int a[15]={0};int v;
        a[i%10]=1;
        a[i/10%10]=1;
        a[i/100]=1;
        a[i*2%10]=1;
        a[i*2/10%10]=1;
        a[i*2/100]=1;
        a[i*3%10]=1;
        a[i*3/10%10]=1;
        a[i*3/100]=1;//统计数字
        // printf("%d",a[9]);
        for(int j=1;j<=9;j++)
        {
            v+=a[j];//v表示1-9这些数字是否全部齐了
            // printf("%d\n",v);
        } 
        if(v==9) 
        {
            printf("%d %d %d\n",i,i*2,i*3);
        }
        v=0;
        // printf("%d\n",i);
        
    }
return 0;
}
