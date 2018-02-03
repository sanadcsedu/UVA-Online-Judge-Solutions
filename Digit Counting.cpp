#include<stdio.h>
int main()
{
    int a[10];
    int ncase,n,i,rem,j,l,z;
    scanf("%d",&ncase);
    for(int k=1;k<=ncase;k++)
    {
        scanf("%d",&n);

        for(j=0;j<10;j++){
        a[j]=0;
        }

        for(i=1;i<=n;i++)
        {
            z = i;
            for(;;)
            {
                rem = z%10;
                a[rem]++;
                z = z/10;
                if(z==0)break;
            }
        }
        for(l=0;l<10;l++)
        {
            printf("%d",a[l]);

            if(l!=9)
            printf(" ");
            else
            printf("\n");

        }
    }
}
