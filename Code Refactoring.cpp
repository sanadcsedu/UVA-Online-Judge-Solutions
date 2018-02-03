#include<stdio.h>
#include<math.h>
int main()
{
    int tcase,i,j,n,flag;
    scanf("%d",&tcase);
    for(i=1;i<=tcase;i++)
    {
        scanf("%d",&n);
        printf("Case #%d: %d = ",i,n);
        flag = 0;
        for(j=2;j<=sqrt(n);j++)
            if(n%j==0){
                if(flag == 0)printf("%d * %d = ",j,n/j);
                else{
                    printf("%d * %d\n",j,n/j);
                    break;
                }
                flag = 1;
            }
    }
    return 0;
}
