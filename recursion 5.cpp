#include<stdio.h>
#include<math.h>
int rec(int x,int y,int i)
{
    int sum;
    if(i==y)return 0;
    sum = pow(x,i) + rec(x,y,i+1);
    return (sum);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int res = rec(a,b,0);
    printf("%d",res);
}
