#include<stdio.h>
#include<string.h>
int main()
{
    char str[13],a[6],b[6];
    int flag,i,j;
    while(scanf("%s",str)!=EOF)
    {
        for(i=0;i<=5;i++)
        {
            a[i] = str[i];
            b[i]= str[6+i];
        }
        for(i=0;i<3;i++)
        {
            flag = 0;
            for(j=0;j<6;j++)
            {
                if(a[i]==b[j] && a[5-i]==b[5-j])
                {
                    flag = 1;
                    break;
                }
            }
            if(flag==0)break;
        }
        if(flag==0)printf("FALSE\n");
        else printf("TRUE\n");
    }
    return 0;
}
