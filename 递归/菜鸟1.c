//全排列
#include<stdio.h>
#include<stdbool.h>


int arry[13]={0};//初始数组
bool flag[13]={false};//标记数组
int generatep(int index);//递归插入数组
int n;
int  main()
{
    n=3;
    generatep(0);
    return 0;
}
int generatep(int index)
{
    if(index==n){
        for(int i=0;i<n;i++){//数组从1开始存元素
                printf("%d",arry[i]);
        }
        printf("\n");
        return;
    }
    for(int j=1;j<=n;j++){
        if(flag[j]==false){
                arry[index]=j;
                flag[j]=true;//标记
                generatep(index+1);//递归下一个位置
                flag[j]=false;//还原
        }
    }
}