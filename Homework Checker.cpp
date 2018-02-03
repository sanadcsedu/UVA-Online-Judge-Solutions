#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a,b,ans,c=0;
    char sign,res[3];
    while(scanf("%d%c%d=%s",&a,&sign,&b,res)!=EOF)
    {
        if(strcmp(res,"?")==0)continue;
        ans = atoi(res);
        if(sign=='+' && a+b==ans)c++;
        else if(sign=='-' && a-b==ans)c++;
    }
    printf("%d\n",c);
    return 0;
}
