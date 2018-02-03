#include<stdio.h>

int main()
{
    int n,a[1000],flip,j,i,k,temp;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);

        flip = 0;

        for(j=0;j<n;j++)
        {
            for(k=0;k<n-1;k++)
            {
                if(a[k]>a[k+1])
                {
                    temp = a[k];
                    a[k] = a[k+1];
                    a[k+1] = temp;
                    flip++;
                }

            }
        }
        printf("Minimum exchange operations : %d\n",flip);
    }
}
