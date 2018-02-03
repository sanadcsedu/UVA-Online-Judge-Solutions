#include<stdio.h>
#include<string.h>
char a[1000001],b[1000001];
int ans[1000001];
int answer(char a[],char b[])
{
    int i,j,k,x,y,c;
    memset(ans,0,sizeof(ans));
    k = c = 0;
    for(i=strlen(a)-1,j=strlen(b)-1;i>=0;i--,j--,k++)
        {
            x = a[i]-'0';
            if(j>=0)y = b[j]-'0';
            else y = 0;
            if(c==1)y++;
            if(x<y)
            {
                x += 10;
                c = 1;
            }
            else c = 0;
            ans[k]=x-y;
        }
        return k;
}
int main()
{
    int i,tcase,l,sign,p,q,j,end;
    scanf("%d",&tcase);
    getchar();
    for(l=1;l<=tcase;l++)
    {
        scanf("%s %s",a,b);
        if(strcmp(a,b)==0)
        {
            printf("0\n");
            continue;
        }
        p = strlen(a);
        q = strlen(b);
        if(p>q)
        {
            sign = 1;
            end = answer(a,b);
        }
        else if (p<q)
        {
            sign = -1;
            end = answer(b,a);
        }
        else if(p==q)
        {
            sign = strcmp(a,b);
            if(sign<0)end = answer(b,a);
            else end = answer(a,b);
        }
        for(i=end;i>=0;i--)
        if(ans[i]!= 0)break;
        if(sign<0)printf("-");
        for(j=i;j>=0;j--)
            printf("%d",ans[j]);
        printf("\n");
    }
    return 0;
}

