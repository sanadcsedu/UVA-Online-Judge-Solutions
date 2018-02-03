#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int fre[50];
    char text[150]={0};
    int max = 0,flag = 0,i,c;
    memset(fre,0,sizeof(fre));
    while(gets(text)!=NULL)
    {
        if(strcmp(text,"#")==0)
        {
            for(i=1;i<=max;i++)
            if(fre[i]!=0)printf("%d %d\n",i,fre[i]);
            printf("\n");
            memset(fre,0,sizeof(fre));
            flag = max = 0;
            continue;
        }
        if(flag==0)c=0;
        for(i=0;text[i];i++)
        {
            if(isalpha(text[i]) || text[i]=='\'' || text[i]=='-')
             {
                 if(isalpha(text[i]))c++;
             }

            else
            {
                if(max<c)max=c;
                fre[c]++;
                c = 0;
            }
        }
        if(text[i-1]=='-')flag =1;
        else
        {
            if(max<c)max=c;
            fre[c]++;
            c = 0;
            flag = 0;
        }
        memset(text,0,sizeof(text));
    }
    return 0;
}

