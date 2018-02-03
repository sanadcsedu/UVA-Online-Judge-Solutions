#include<stdio.h>
#include<math.h>
int main()
{
    long long int i=1,n,lakh,kuti,hajar,shata,z,boro_kuti;
    while(scanf("%lld",&n)!=EOF)
    {
        printf("%4lld.",i++);
        if(n==0)
        {
            printf(" 0\n");
            continue;
        }
        boro_kuti=n/10000000;
        if(boro_kuti>0)
        {
            z = boro_kuti;
            kuti = boro_kuti/10000000;
            z = z%10000000;
            if(kuti>0)printf(" %lld kuti",kuti);
            lakh = z/100000;
            z = z%100000;
            if(lakh>0)printf(" %lld lakh",lakh);
            hajar = z/1000;
            z = z%1000;
            if(hajar>0)printf(" %lld hajar",hajar);
            shata = z/100;
            z = z%100;
            if(shata>0)printf(" %lld shata",shata);
            if(z>0)printf(" %lld",z);
            printf(" kuti");
        }
            z = n%10000000;
            lakh = z/100000;
            z = z%100000;
            if(lakh>0)printf(" %lld lakh",lakh);
            hajar = z/1000;
            z = z%1000;
            if(hajar>0)printf(" %lld hajar",hajar);
            shata = z/100;
            z = z%100;
            if(shata>0)printf(" %lld shata",shata);
            if(z>0)printf(" %lld",z);

            printf("\n");
    }
    return 0;
}
