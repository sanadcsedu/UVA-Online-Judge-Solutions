#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[10]={0},j,flag,l;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<10;j++)
        scanf("%d",&a[j]);

        flag=0;

        if(a[0]>a[1])
        {
            for(int k=1;k<9;k++)
            {
                flag=2;

                if(a[k]<a[k+1])
                {
                    flag=1;
                    break;
                }

            }
        }
        else
        {
            for(l=1;l<9;l++)
            {
                flag=2;
                if(a[l]>a[l+1])
                {
                    flag=1;
                    break;
                }

            }

        }
        if(i==1)printf("Lumberjacks:\n");
        if(flag==1)printf("Unordered\n");
        if(flag==2)printf("Ordered\n");
    }
}
