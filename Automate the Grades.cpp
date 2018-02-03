#include<stdio.h>
#include<algorithm>
using namespace std;
double ct(int q[])
{
    double add;
    sort(q,q+3);
    add = (q[1] + q[2])/2;
    return add;
}
int main()
{
    int ncase,a,b,c,d,e[3],i,j;
    double total;
    scanf("%d",&ncase);
    for(i=1;i<=ncase;i++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        for(j=0;j<3;j++)
        scanf("%d",&e[j]);

        total = a + b + c + d + ct(e);

        if(total>=90)printf("Case %d: A\n",i);
        else if(total>=80 && total<90)printf("Case %d: B\n",i);
        else if(total>=70 && total<80)printf("Case %d: C\n",i);
        else if(total>=60 && total<70)printf("Case %d: D\n",i);
        else printf("Case %d: F\n",i);
    }
}
