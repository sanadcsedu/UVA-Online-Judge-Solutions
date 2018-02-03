#include<stdio.h>

int triangle(int x,int y,int z)
{
    double s;
    s = (x+y+z)/2.0;
    if(s<=x || s<=y || s<=z)return 0;
    else return 1;
}
int main()
{
    int n,a,b,c,k,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        k = triangle(a,b,c);
        if(k==1)printf("OK\n");
        else if(k==0)printf("Wrong!!\n");
    }
    return 0;
}
