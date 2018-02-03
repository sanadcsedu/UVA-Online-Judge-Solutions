#include<stdio.h>
#include<string.h>
int main()
{
    char num[1000]={0};
    int tcase,i,x;
    scanf("%d",&tcase);
    for(i=0;i<tcase;i++)
    {
        scanf("%s",num);
        x = strlen(num);
        if(strcmp(num,"1")==0||strcmp(num,"78")==0||strcmp(num,"4")==0)printf("+\n");
        else if(num[x-1]=='5' && num[x-2]=='3')printf("-\n");
        else if (num[0]=='1' && num[1]=='9'&& num[2]=='0')printf("?\n");
        else printf("*\n");
    }
    return 0;
}
