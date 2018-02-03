#include<stdio.h>

int main()
{
    int n,a[110]={0},i,k,z,j,m,sum,tm;
    for(k=1;;k++)
    {
        scanf("%d",&n);
        if(n==0)break;

        sum =0;

        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum = sum + a[i];
        }

        z = sum/n;
        tm =0;
        for(j=0;j<n;j++)
        {
            if(a[j]<z)
            {
                m = z - a[j];
                tm = tm + m;
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",k,tm);


    }

}
