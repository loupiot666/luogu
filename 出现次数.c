
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    char str[50];
    int count[26] = {0};
    int i;
    gets(str);
    
    for (i = 0; str[i]!='\0'; i += 1)
    {
        
        int number = str[i] - 'a';
        
        count[number] += 1;
    }
    //for循环打印字符出现的次数
    float shang;
    for (i = 0; i < 26; i += 1)
    {
        //if判断出现字符出现的次数是否大于0
        //出现的次数大于0则打印
        if (count[i] > 0)
        {
            shang+=count[i]*log2(count[i]);
            
        }
    }
    printf("%d",(int)shang);
    return 0;
}