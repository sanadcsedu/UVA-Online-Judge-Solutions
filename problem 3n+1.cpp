#include<stdio.h>

int main()
{

	long long int i,a,b,p,store,c,max,min;
	while(scanf("%lld %lld",&a,&b)!=EOF)
	{
	    if(a>b)
	    {
	        max = a;
	        min = b;
	    }
	    else
	    {
	        max = b;
	        min = a;
	    }
        store = 0;
        for(i = min;i<=max;i++)
        {
            p = i;
            c = 0;
            for(;;)
            {
                c++;
                if( p == 1)break;
                if(p%2 == 0)
                {
                    p = p / 2;
                }
                else
                {
                    p = 3 * p + 1;
                }
            }
            if(c>store)
            {
                store = c;
            }

        }
        printf("%lld %lld %lld\n",a,b,store);
	}
    return 0;
}
