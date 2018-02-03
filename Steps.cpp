#include<stdio.h>
int main()
{
    int tcase,j,i,n,a,b,c;
    scanf("%d",&tcase);
    for(j=1;j<=tcase;j++)
    {
        scanf("%d %d",&a,&b);
        n = b-a;
        i = 1;
        c = 0;
        while(n)
        {
            if(n-2*i>=0)
            {
                n = n - 2*i;
                c+=2;
                i++;
            }
            else
            {
                if(n-i>=0)
                {
                    n = n-i;
                    c+=1;
                }
                i--;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}

