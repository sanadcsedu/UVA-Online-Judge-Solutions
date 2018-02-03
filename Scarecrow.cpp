#include<stdio.h>
int main()
{
    char a[110];
    int tcase,c,i,j,n;
    scanf("%d",&tcase);
    for(i=1;i<=tcase;i++)
    {
        scanf("%d %s",&n,a);
        for(j=0,c=0;j<n;j++)
            if(a[j]=='.')
            {
                a[j+1]=a[j+2]='#';
                c++;
            }
        printf("Case %d: %d\n",i,c);
    }
    return 0;
}
