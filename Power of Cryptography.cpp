#include<stdio.h>
#include<math.h>

int main()
{
    double res,n,num;
    while(scanf("%lf %lf",&n,&num)!=EOF)
    {
        res = pow(num,(1.0/n));
        printf("%.0lf\n",res);
    }
    return 0;
}
