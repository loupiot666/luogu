#include <stdio.h>
int main(){
	int x,p; //x为十进制数，p为目标进制大小 
	scanf("%d",&x);
	scanf("%d",&p);
	int a[100]; //存放余数 
	int count=0;
    if(x==0)
    {
        printf("0");
    }
	while(x!=0)
    {
		a[count]=x%p;
		x=x/p;
        count++;
	}//当商不为0时进行循环 
	
	for(int i=count-1;i>=0;i--){
		printf("%d",a[i]);
	}

}