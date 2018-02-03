#include<stdio.h>
#include<string.h>
char text[2000];
int main()
{
    int z,max,k,ascii[130],q=0;
    while(gets(text))
    {
        memset(ascii,0,sizeof(ascii));
        max = 0;
        for(int i=0;text[i];i++)
        {
            z = text[i];
            ascii[z]++;
            if(max<ascii[z])max = ascii[z];
        }
        if(q>0)printf("\n");
        for(int j=1;j<=max;j++)
            for(k=128;k>=31;k--)
                if(ascii[k]==j)printf("%d %d\n",k,j);
        q++;
    }
    return 0;
}
