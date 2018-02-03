#include<stdio.h>
#include<math.h>
int a[100100];
int main()
{
    int tcase, i, n, j, d, c, max;
    scanf("%d",&tcase);
    for(i=1; i<= tcase; i++)
    {
        scanf("%d",&n);
        a[0] = 0;
        for(j=1; j<=n; j++)
            scanf("%d",&a[j]);
        max = -1;
        for(j=1; j<=n; j++)
        {
            d = a[j] - a[j-1];
            if(max<d)max =d;
        }
        c = max;
        for(j=1; j<=n; j++)
        {
            d = a[j]- a[j-1];
            if(max==d)max--;
            else if(d > max){
                c++;
                break;
            }
        }
        printf("Case %d: %d\n",i,c);
    }
    return 0;
}
