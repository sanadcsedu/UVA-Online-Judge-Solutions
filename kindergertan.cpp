#include<stdio.h>
#include<string.h>

int main()
{
    char ch[1000];
    int x,c,i,flag;
    while( gets(ch) != NULL)
    {
        c= 0;
        flag = 0;
        for(i=0;i<='\n';i++)
        {
            if((ch[i]>='a' && ch[i]<='z')||(ch[i]>='A' && ch[i]<='Z'))
            {
                if(flag==0)
                {
                     c++;
                     flag=1;
                }
            }
            else flag = 0;

        }
        printf("%d\n",c);

    }
}
