#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    int count;
    fgets(str,20,stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='A')
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}