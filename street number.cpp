#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,i,c=1,z;
    for(i=8;c<=10;i++)
    {
        a = ((i*i)+i)/2;
        z = sqrt(a);
        if(a == z*z )
        {
            printf("%10lld%10lld\n",z,i);
            c++;
        }
    }
    return 0;
}
