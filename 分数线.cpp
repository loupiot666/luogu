#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
//前面是头文件
struct zhiyuanzhe{
	int num;		//号码
	int chengji;	//成绩
};
int cmp(zhiyuanzhe p1,zhiyuanzhe p2){
	if(p1.chengji>p2.chengji){
    				//比成绩
		return true;
	}
	else if(p1.chengji==p2.chengji){
		if(p1.num<p2.num)return true;
        			//比较报名号
		else return false;
	}
	else return false;
}					//重载排序
int main(){
	int n,m;
	cin>>n>>m;
	m=floor(m*1.5);
    				//向下取整
	zhiyuanzhe people[n];
	for(int i=0;i<n;i++){
		cin>>people[i].num>>people[i].chengji;
	}
	sort(people,people+n,cmp);
    				//进行排序
	int fenshuxian=people[m-1].chengji;
	int renshu=m;
	for(int i=m;i<n;i++){
		if(people[i].chengji==fenshuxian)renshu+=1;
        			//如果有成绩为录取分数线的则人数加一
		else if(people[i].chengji<fenshuxian)break;
        			//如果低于分数线跳出循环
	}
	cout<<fenshuxian<<" "<<renshu<<endl;
	for(int i=0;i<renshu;i++){
		cout<<people[i].num<<" "<<people[i].chengji<<endl;
	}
	return 0;
} 