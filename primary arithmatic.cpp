#include<stdio.h>
#include<string.h>

int main()
{
    char a[15]={0},b[15]={0};
    int m,n,c,i;
    for(;;)
    {
        scanf("%s %s",a,b);
        if(a[0]== '0' && b[0]=='0')break;

        m=strlen(a);
        n=strlen(b);

        int max,p,q,r,l;

        if(m>n)max=m;
        else max=n;

        int num_1[15]={0},num_2[15]={0};

        for(p=max-1,q=n-1;q>=0;q--,p--)
        {
            num_2[p] = (b[q]-48);
        }
        for(l=max-1,r=m-1;r>=0;l--,r--)
        {
            num_1[l] = (a[r]-48);
        }

        c = 0;
        for(i=max-1;i>=0;i--)
        {
            if(num_1[i]+num_2[i]>9)
            {
                num_2[i-1]++;
                c++;
            }
        }
        if(c==0)printf("No carry operation.\n");
        else if(c==1)printf("%d carry operation.\n",c);
        else printf("%d carry operations.\n",c);
    }
}
