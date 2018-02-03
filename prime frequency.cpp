#include<stdio.h>
#include<string.h>
#include<math.h>
int isprime(int n)
{
    int w,i;
    w = sqrt(n);
    for(i=2;i<=w;i++)
    if(n%i==0)return 0;
    return 1;
}
int main()
{
    char a[1000];
    int fre[140];
    int ncase,flag,i,j,x,k;
    scanf("%d",&ncase);
    for(k=1;k<=ncase;k++)
    {
        memset(fre,0,sizeof(fre));
        scanf("%s",a);
        for(i=0;a[i];i++)
        fre[a[i]]++;
        flag=0;
        printf("Case %d: ",k);
        for(i=0;i<140;i++)
        {
            if(fre[i]!=0){
            x = isprime(fre[i]);
            if(x==1 && fre[i]!=1){printf("%c",i);
            flag = 1;
            }
            }
        }
        if(flag==0)printf("empty");
        printf("\n");
    }
}
