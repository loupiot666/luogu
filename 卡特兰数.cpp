#include<cstdio>
#define siz 20
using namespace std;
int n;
int c[siz*2][siz];
int main(){

    scanf("%d",&n);
    for(int i=1;i<=2*n;i++) c[i][1]=c[i][i]=1;
    for(int i=3;i<=2*n;i++)
    for(int j=2;j<i;j++)
        c[i][j]=c[i-1][j]+c[i-1][j-1];
    printf("%d",c[2*n][n]-c[2*n][n-1]);
    return 0;
}