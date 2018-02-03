#include<stdio.h>
#include<string.h>

int main()
{
    char nine[2000];

    for(;;)
    {
        scanf("%s",nine);
        if(nine[0] =='0' )break;

        int x= strlen (nine);
        int sum = 0,degree=0;
        for(int i=0;i<x;i++)
        {
            sum= sum + (nine[i]-48);
        }

        if(sum % 9 == 0)
        {
            for(;;)
        {
            if(sum % 9 == 0)
            degree++;
            if(sum<=9)
            {
                printf("%s is a multiple of 9 and has 9-degree %d.\n",nine,degree);
                break;

            }
            int rem = 0,z = 0;
            for(;;)
            {
                rem = sum %10;
                z = z + rem;
                sum = sum / 10;
                if(sum==0)break;
            }
            sum = z;
        }
        }
        else printf("%s is not a multiple of 9.\n",nine);
    }
    return 0;
}
