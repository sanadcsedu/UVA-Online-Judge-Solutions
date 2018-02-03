#include<stdio.h>
#include<math.h>

int main()
{
    int t,n,rem;
    scanf("%d",&t);
    double a;
    long int temp;
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);

        a=((n*567)/9)+7492;
        a=((a*235)/47)-498;

        temp=fabs(a);

        for(int j=0;j<=1;j++)
        {
            rem=temp%10;
            temp=temp/10;
        }

        printf("%d\n",rem);
    }
}
