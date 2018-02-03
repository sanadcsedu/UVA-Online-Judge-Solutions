#include<stdio.h>
#include<math.h>

int main()
{
    for(j=1;;j++)
    {
        scanf("%d",&n);
        if(n==0)break;
        //z = sqrt(n);
        for(i=1;i<=z;i++)
        {
            if(n%i==0)
            {
                if(i==z)sum = sum + i;
                else
                sum = sum + i + (i * 2);
            }
        }
        printf("Case %d: %d",j,sum)
    }
    return 0;
}
