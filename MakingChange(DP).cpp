#include<stdio.h>
#include<string.h>

int min(int a,int b)
{
    if(a<b)return a;
    return b;
}
int coinchange(int coin[],int nc[],int taka)
{
    int table[100000];
    memset(table,100000,sizeof(table));
    int i,j,c;
    for(i=0;i<6;i++)
    {
        c = coin[i];
        for(j=c;nc[i]>0;j++,nc[i]--)
        {
            table[j+c] += min(table[j+c],table[j]+1);
        }
    }
    return table[taka];
}
int main()
{
    int coins[]={1,2,4,10,20,40};
    int nc[6];
    int z,x;
    double n;
    for(;;)
    {
        scanf("%d %d %d %d %d %d",&nc[0],&nc[1],&nc[2],&nc[3],&nc[4],&nc[5]);
        if(nc[0]==0 && nc[1]==0 && nc[2]==0 &&nc[3]==0 &&nc[4]==0 &&nc[5]==0)break;

        scanf("%lf",&n);
        z = n * 20;
        x = coinchange(coins,nc,n);

        printf("%3d\n",x);
    }
}
