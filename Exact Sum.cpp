#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    int a[10005];
    int books,budget,i,j,k,x,y,min;
    while(scanf("%d",&books)!=EOF)
    {
        for(i=0;i<books;i++)
        scanf("%d",&a[i]);
        scanf("%d",&budget);
        sort(a,a+books);
        min = 1000001;
        for(j=0;j<books;j++)
            for(k=j+1;k<books;k++)
            {
                if(a[j]+a[k]==budget)
                {
                    if(min > a[k]-a[j])
                    {
                        x = a[j];
                        y = a[k];
                    }
                }
            }
        printf("Peter should buy books whose prices are %d and %d.\n\n",x,y);
    }
    return 0;
}
