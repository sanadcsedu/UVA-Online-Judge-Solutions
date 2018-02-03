#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    long long int n,ori,rev,d,nine,max,min,i,j;
    int a[15]={0};
    while(scanf("%lld",&n)!=EOF)
    {
        ori = 0;
        rev = 0;
        for(i=0;;i++)
        {
            a[i] = n%10;
            n = n/10;
            if (n==0)break;
        }
        sort(a,a+i+1);
        if(a[0]==0){
            for(j = 0; a[j] == 0; j++);
            a[j] ^= a[0] ^= a[j] ^= a[0];
        }

        for(j=0;j<=i;j++)
        ori = ori*10 + a[j];

        sort(a,a+i+1);
        reverse(a,a+i+1);
        for(j=0;j<=i;j++)
        rev = rev*10 + a[j];

        d = fabs(rev -ori);
        nine = d / 9;
        if (ori > rev){
            max = ori;
            min = rev;}
        else {
            max = rev ;
            min = ori;
        }
        printf("%lld - %lld = %lld = 9 * %lld\n",max,min,d,nine);
    }
}

