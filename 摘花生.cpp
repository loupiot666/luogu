#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;
const int N=30;
int mp[N][N];
int n,m,k;
int tm;
int fx,fy,ex,ey;//起点，终点
int pn;
int ans;
struct dire//记忆花生地址 
{
    int x,y,sum;
};
struct dire stu[900];
bool comp(struct dire a,struct dire b)//比较，大的在前，小的在后 
{
    return a.sum>b.sum;
}
int main()
{
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>mp[i][j];
            if(mp[i][j]>0)//有花生 ，多多：我看到你们了 
            {
                stu[++pn].sum=mp[i][j];//获得一系列有花生的坐标
                stu[pn].x=i;
                stu[pn].y=j;//保存坐标
            }
        }
    }
    sort(stu+1,stu+pn+1,comp);//按照题意来，先大后小 
	fx=1;
	fy=stu[1].y;//设立你的初始位置 
	k--;//从人群中窜出一个光头,多多用了一个单位从人群中跳出 
    for(int i=1;i<=pn;i++)//枚举每一个有花生的点
    {
        tm=0;//计时器清零 
        ex=stu[i].x;
        ey=stu[i].y;//设定多多的终点坐标
        tm=abs(fx-ex)+abs(fy-ey);//求曼哈顿距离，计算本次导航距离 
        k--;//采花生 
        k-=tm;//剩余时间减去前往时间 
        if(k>=ex)//可以返回,装上花生 
        {
            ans+=mp[ex][ey];//加入 
            fx=ex;
            fy=ey;//路径规划成功，前往 fx,fy 
        }
        else//多多如果去这个目标就回不去了，带上现在的花生米回去 
        {
            cout<<ans<<endl;
            return 0;
        }
    }
    cout<<ans<<endl;//真棒，获得了全部的花生米 
    return 0;
}