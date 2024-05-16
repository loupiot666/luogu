//记忆化
#include<cstdio>
#include<iostream>
#define llx long long
using namespace std;
llx f[40][40][40],a,b,c;
llx fun(llx x,llx y,llx z){
    
    if((x<=0)||(y<=0)||(z<=0)){return 1;}
    if((x>20)||(y>20)||(z>20)){return fun(20,20,20);}
    if(f[x][y][z]){return f[x][y][z];}
    if((x<y)&&(y<z)){return f[x][y][z]=fun(x,y,z-1)+fun(x,y-1,z-1)-fun(x,y-1,z);}
    return f[x][y][z]=fun(x-1,y,z)+fun(x-1,y-1,z)+fun(x-1,y,z-1)-fun(x-1,y-1,z-1);
}
void out(){
    printf("w(%lld, %lld, %lld) = %lld\n",a,b,c,fun(a,b,c));
}
int main(){
    while(1){
        scanf("%lld%lld%lld",&a,&b,&c);
        if((a==-1)&&(b==-1)&&(c==-1)){
            break;
        }
        out();
    }
    return 0;
}