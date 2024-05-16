//单词匹配
#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,t=0,tt=0;
    char s[1000001],ss[11];
    gets(ss);
    gets(s);
    for(i=0;i<=strlen(s)-strlen(ss);++i)
    {
        for (j=0;j<=strlen(ss)-1;++j)    
        {
            if (toupper(s[j+i])!=toupper(ss[j])) break;
            if (i>0&&s[i-1]!=' ') break;
        }
        if (j==strlen(ss)&&(s[j+i]==' '||j+i==strlen(s))) 
        {   
            t++;
            if (t==1) tt=i;
        }
    }
    if (t==0) printf("-1");               
    else  printf("%d %d\n",t,tt); 
    return 0;
}