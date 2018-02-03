#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
    long long int a[4],n,i,j;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%lld",&a[j]);
        }
        sort(a,a+4);

        if(a[3]<(a[0]+a[1]+a[2]))
        {
            if(a[0]==a[1] && a[1]==a[2] && a[2]==a[3])
            printf("square\n");

            else if((a[0]==a[1] && a[2]==a[3]) || (a[1]==a[2] && a[3]==a[0]) || (a[0]==a[2] && a[1]==a[3] ))
            printf("rectangle\n");

            else
            printf("quadrangle\n");

        }
        else
        printf("banana\n");
    }
}
