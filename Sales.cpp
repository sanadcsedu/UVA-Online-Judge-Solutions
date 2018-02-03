#include<stdio.h>
int main()
{
    int tcase,i,j,k,a[1005],c,n;
    scanf("%d",&tcase);
    for(i=1;i<=tcase;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        scanf("%d",&a[i]);
        c = 0;
        for(j=1;j<n;j++)
        {
            for(k=0;k<j;k++)
            {
                if(a[k]<=a[j])c++;
            }
        }
        printf("%d\n",c);
    }
}
