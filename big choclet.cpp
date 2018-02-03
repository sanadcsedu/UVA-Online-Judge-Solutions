#include<stdio.h>

int main()
{
    int m,n,f;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        f = m*n -1;
        printf("%d\n",f);
    }
    return 0;
}
