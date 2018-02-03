#include<stdio.h>
#include<string.h>

int main()
{
    int hartal[3700],interval[110];
    int tcase,i,j,k,l,parties,day;
    scanf("%d",&tcase);
    for(i=1;i<=tcase;i++)
    {
        memset(hartal,0,sizeof(hartal));
        scanf("%d",&day);
        scanf("%d",&parties);

        for(j=0;j<parties;j++)
        {
            scanf("%d",&interval[j]);

            for(k=interval[j];k<=day;)
            {
                hartal[k]=1;
                k = k + interval[j];
            }
        }
        for(int p=6;p<=day;p+=7)
        {
            hartal[p]=0;
            hartal[p+1]=0;
        }
        int c = 0;
        for(l=1;l<=day;l++)
        {
            if(hartal[l]==1)c++;
        }
        printf("%d\n",c);
    }
}

