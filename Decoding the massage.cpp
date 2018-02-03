#include<stdio.h>
#include<string.h>
char text[10000];
int main()
{
    int tcase,i,flag,c,word,yes;
    scanf("%d",&tcase);
    gets(text);
    gets(text);
    for(i=1;i<=tcase;i++)
    {
        printf("Case #%d:\n",i);
        for(;;)
        {
            gets(text);
            if(text[0]=='\0')break;
            flag =0;
            c = 0;
            word = 0;
            yes = 0;
            for(int i=0;text[i];i++)
            {
                if(text[i]==' ')flag=1;
                else
                {
                    if(flag==1)
                    {
                        if(yes==1)word++;
                        c = 0;
                        yes = 0;
                    }
                    if(word==c)
                    {
                        printf("%c",text[i]);
                        yes = 1;
                    }
                    c++;
                    flag=0;
                }
            }
            printf("\n");
        }
        if(i!=tcase)printf("\n");
    }
    return 0;
}

