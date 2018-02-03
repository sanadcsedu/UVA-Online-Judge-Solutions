#include<stdio.h>
#include<string.h>

char str[51][501],x;
int main()
{
    int tcase=0,i=0,n=0,j=0,k=0;
    scanf("%d",&tcase);
    getchar();
    for(i=1;i<=tcase;i++)
    {
        scanf("%d",&n);
        getchar();
        for(j=0;j<n;j++)
        gets(str[j]);
        printf("Case %d:\n",i);
        for(j=0;j<n;j++)
        {
            int flag = 0;
            for(k=0;str[j][k];k++)
            {
                if(str[j][k]==' ' && flag!=1)
                {
                    printf(" ");
                    flag = 1;

                }
                else if(str[j][k]!=' ')
                {
                    printf("%c",str[j][k]);
                    flag = 0;
                }
            }
            printf("\n");
        }
        if(i!=tcase)printf("\n");
    }
    return 0;
}
