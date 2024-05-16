#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
int n,a[10],pp=1;
bool b[10];
using namespace std;
int print()       //该程序为输出
{
    for (int i=1;i<=n;i++)
    printf("%5d",a[i]);
    printf("\n");
}
int search(int k)
{
    for (int i=1;i<=n;i++)  //找到所有的可能，则是1~n
    {
        if (!b[i])    //判断该数是否用过
        {
            b[i]=1;    //没有用过就把他设置成用过
            a[pp]=i;       //储存
            pp++;
            if (k==n)     //如果存了n个数了，就输出，否则继续搜索
            print();
            else search(k+1);
            pp--;
            b[i]=0;      //回溯
        }
    }
}
int main()
{
    scanf("%d",&n);    //输入n
    memset(b,0,sizeof(b));    //把所有数先设为没出现过
    search(1);           //开始搜索
}