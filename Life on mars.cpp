#include<stdio.h>
#include<algorithm>
using namespace std;
int a[100005];
char ch[100004];
int main()
{
    int i,j,flag;
    for(;;)
    {
        for(i=0;;i++)
        {
            scanf("%d%c",&a[i],&ch[i]);
            if(ch[i]=='\n')break;
        }
        sort(a,a+i+1);
        flag = 0;
        for(j=0;j<=i;j++)
        {
            if(a[a[i]]!=a[i])
            {
                printf("Message hacked by the Martians!!!\n");
                flag = 1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d",a[0]);
            for(j=1;j<=i;j++)
            printf(" %d",a[j]);
        }
        printf("\n");
    }
    return 0;

}
