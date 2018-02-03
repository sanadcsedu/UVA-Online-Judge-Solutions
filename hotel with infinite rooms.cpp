#include<stdio.h>
int main()
{
    long long int s,d,days;
    while(scanf("%lld %lld",&s,&d)!=EOF)
    {   days = 0;
        for(;;)
        {
            days = days + s;
            if(days >= d)break;
            s = s +1;
        }
        printf("%lld\n",s);
    }
    return 0;
}
