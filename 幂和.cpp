#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int N=1001;
int a[N],n,k,l=0;
int main(){
    LL ans=0;
    scanf("%d%d",&n,&k);
    while(k)a[++l]=k%2,k/=2;//先转二进制
    for(int i=l;i>=1;i--)
        ans+=pow(n,i-1)*a[i];//再转n进制
    printf("%lld\n",ans);
    return 0;
}