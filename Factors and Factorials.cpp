#include<stdio.h>
#include<math.h>
int main()
{
    int primes[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    int n,i,c,temp;
    for(;;)
    {
        scanf("%d",&n);
        if(n==0)break;
        printf("%3d! =",n);
        for(i=0;i<25;i++)
        {
            c =0;
            temp=primes[i];
			while(n/temp){
				c+=(n/temp);
				temp*=primes[i];
			}
            if(c==0)break;
            if(i==15)printf("\n      ");
            printf("%3d",c);
        }
        printf("\n");
    }
    return 0;
}
