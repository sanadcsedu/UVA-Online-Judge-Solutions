#include<stdio.h>
#include<string.h>

int main()
{
    int n=0;
    char ch[10];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%s",ch);
        int x = strlen (ch);
        int c = 0;
        if(x==3)
        {
            if(ch[0]=='o')c++;
            if(ch[1]=='n')c++;
            if(ch[2]=='e')c++;

            if(c>=2)printf("1\n");
            else printf("2\n");

        }
        else
        printf("3\n");
    }
    return 0;
}
