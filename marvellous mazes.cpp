#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char text[10000];
    while(gets(text)!=NULL)
    {
        int x,i,j,sum=0;
        x = strlen(text);
        for(i=0;i<x;i++)
        {
            if(isdigit(text[i]))
            sum = sum + (text[i]-'0');

            else
            {
                if(text[i]=='!')printf("\n");
                else if(text[i]=='\n')printf("\n");
                else if(text[i]=='b')
                {
                    for(j=1;j<=sum;j++)
                    printf(" ");

                }
                else
                {
                    for(j=1;j<=sum;j++)
                    printf("%c",text[i]);
                }

                sum = 0;
            }
        }
        printf("\n");
    }
    return 0;
}
