#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,d,r,a[105],b[105],i,overtime,z;
    for(;;)
    {
        scanf("%d %d %d",&n,&d,&r);
        if(n==0 && d==0 && r==0)break;
        for(i=0;i<n;i++)scanf("%d",&a[i]);
        sort(a,a+n);
        for(i=0;i<n;i++)scanf("%d",&b[i]);
        sort(b,b+n);
        reverse(b,b+n);
        overtime=0;
        for(i=0;i<n;i++){
            z = a[i]+b[i];
            if(z>d)overtime+=(z-d)*r;
        }
        printf("%d\n",overtime);
    }
    return 0;
}
