#include<stdio.h>

int main()
{
    int i,j,k,l,c;
    long long int n;
    int rem[1000],bin[1000];
    for(;;)
    {
        scanf("%lld",&n);
        if(n==0)break;

        for(i=0;;i++)
        {
            rem[i] = n % 2;
            n = n / 2 ;
            if(n==0)break;
        }
        for(j=0,k=i;j<=i;j++,k--)
        {
            bin[j]=rem[k];
        }
        printf("The parity of ");
        c=0;
        for(l=0;l<=i;l++){

        if(bin[l]==1)c++;
        printf("%d",bin[l]);
        }
        printf(" is %d (mod 2).\n",c);
    }
}
