#include<stdio.h>
#include<string.h>
char news[10005];
int main()
{
    char str1[101]={0};
    int num[101]={0};
    int ncase;
    scanf("%d",&ncase);
    for(int i=0;i<ncase;i++)
    {
        int n=0,m=0,i=0,k=0,j=0,x=0;
        double sum;
        scanf("%d\n",&n);
        for(i=0;i<n;i++){
        scanf("%c %d\n",&str1[i],&num[i]);
        }
        scanf("%d\n",&m);
        sum = 0;
        for(i=0;i<m;i++)
        {
            gets(news);
            for(j=0;j<n;j++)
            {
                for(k=0;news[k];k++)
                {
                    if(str1[j]==news[k])
                    sum += num[j];
                }
            }
        }
        printf("%.2lf$\n",sum/100);
    }
}

