#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    char num[10000];
    long long int x,sum,i,z;
    for(;;)
    {
        scanf("%s",num);

        if(num[0]=='0')break;

        x = strlen (num);
        sum = 0;
        for(i=x-1,z=1;i>=0;i--,z++)
        {
            sum = sum + (num[i]-'0')*(pow(2,z)-1);
        }
        printf("%lld\n",sum);
    }
    return 0;
}
