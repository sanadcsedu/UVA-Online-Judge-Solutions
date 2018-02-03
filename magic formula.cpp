#include<stdio.h>
#include<math.h>
int divide(int a,int b,int c,int d,int x)
{
    int z;
    z = a * x * x + b * x + c;
    if(z%d==0)return 1;
    return 0;
}
int main()
{
    int a,b,c,d,l,count,i,z;
    for(;;)
    {
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&l);
        if(a==0 && b==0 && c==0 && d==0 && l==0)break;
        count = 0;
        for(i=0;i<=l;i++)
        {
            z = divide(a,b,c,d,i);
            if(z==1)count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
