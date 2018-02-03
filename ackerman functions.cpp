#include<stdio.h>
long long int recursion(long long int n,long long int i)
{
    if(n==1)return i;
    if(n%2==0)recursion(n/2,i+1);
    else recursion(3*n+1,i+1);
}
int main()
{
    long long int a,b,max,i,x,number,temp;
    for(;;)
    {
        scanf("%lld %lld",&a,&b);
        if(a==0 && b==0)break;
        max = 0;

        if(a>b)
        {
            temp=a;
            a = b;
            b = temp;
        }
        if(a==1 && b==2)
        {
            printf("Between 1 and 2, 1 generates the longest sequence of 3 values.\n");
            continue;
        }
        if(a==1 && b==1)
        {
            printf("Between 1 and 1, 1 generates the longest sequence of 3 values.\n");
            continue;
        }
        for(i=a;i<=b;i++)
        {
            x = recursion(i,0);
            if(max<x)
            {
                max = x;
                number = i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,number,max);
    }
    return 0;
}
