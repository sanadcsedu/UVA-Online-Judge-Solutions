#include<stdio.h>
#include<string.h>
#include<math.h>
long long int fibonacci[51],given[150];
char cipher[150],up[150],output[150];
int main()
{
    fibonacci[0]=fibonacci[1]=1;
    fibonacci[2]=2;
    long long int i=0,tcase=0,j=0,k=0,n=0,flag=0,c=0,x=0;
    for(int i=3;i<=46;i++)
    {
        fibonacci[i] = fibonacci[i-2]+fibonacci[i-1];
    }
    scanf("%lld",&tcase);
    for(i=1;i<=tcase;i++)
    {
        memset(up,0,sizeof(up));
        memset(output,' ',sizeof(output));
        memset(given,0,sizeof(given));
        memset(cipher,0,sizeof(cipher));
        scanf("%lld",&n);
        for(j=0;j<n;j++)
        scanf("%lld",&given[j]);
        getchar();
        gets(cipher);
        for(j=0,k=0;cipher[j];j++)
        if(cipher[j]>='A' && cipher[j]<='Z')up[k++]=cipher[j];
        for(x=0,j=1,c=0;c<n;j++)
        {
            flag = 0;
            for(k=0;k<n;k++)
            {
                if(given[k]==fibonacci[j])
                {
                    c++;
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
            {
                if(x!=0)output[x-1]=' ';
                output[j-1]=up[k];
                x = 0;
            }
            else x = j;

        }
        output[j-1]='\0';
        printf("%s\n",output);
    }
    return 0;
}
