#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[100];
    int up,down,i,j,k,t;
    for(i=1;i<=n;i++)
    {
        for(int l=0;l<n;l++)
        a[l]=0;

        scanf("%d",&t);
        for(j=0;j<t;j++)
        {
            scanf("%d",&a[j]);
        }
        up=0,down=0;
        for(k=0;k<t-1;k++)
        {
            if(a[k]<a[k+1]){

            up++;
            }
            else if(a[k]>a[k+1]) down++;
        }
        printf("Case %d: %d %d\n",i,up,down);
    }
}
