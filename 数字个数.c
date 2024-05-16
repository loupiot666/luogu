#include<stdio.h>
int main()
{
    char str[50];
    int a[10]={0};
    int r,q;
    gets(str);
    int count=0;
    while(str[r]!='\0')
    {
        
        while(str[r]!='\0'&&(str[r]<'0'||str[r]>'9'))
        {
            r++;
        }
        // printf("%d\n",count);
        if(str[r]!='\0')
        {
            q=r+1;
            a[count]=str[r]-'0';
            // printf("%d\n",count);
            while(str[q]>='0'&&str[q]<='9')
            {
                a[count]=10*a[count]+str[q]-'0';
                q++;
            }
            r=q;
            count++;
        }
        else
        {
            break;
        }
        
        
    }
    for(int i=0;i<count;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}