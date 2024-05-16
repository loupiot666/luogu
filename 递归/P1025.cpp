//递增选数
#include<cstdio>

int n,k,cnt;

void dfs(int num,int sum,int time)
{
    if(time==k)
    {
        if(sum==n) cnt++;
        return;
    }
    for(int i=num;sum+i*(k-time)<=n;i++)//剪枝，只用枚举到sum+i*(k-cur)<=n为止
        dfs(i,sum+i,time+1);
}

int main()
{
    scanf("%d%d",&n,&k);
    dfs(1,0,0);
    printf("%d",cnt);
}