#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,k,l,swap,x,a[60],j,temp;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);

        for(l=0;l<x;l++)
        scanf("%d",&a[l]);

        swap = 0;

        for(k=0;k<x;k++)
        {
            for(j=0;j<x-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1]=temp;
                    swap++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",swap);
    }
}
