#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int a[10005];
int binarysearch(int start, int end,int z)
{
    int mid;
    while(1)
    {
        mid = (start+end)/2;
        if(a[mid]==z)return 1;
        else if(end<start)return 0;
        else if(a[mid]<z)start = mid+1;
        else end = mid-1;
    }
}
int main()
{
    int books,budget,i,j,k,x,y,min,z,p;
    while(scanf("%d",&books)!=EOF)
    {
        for(i=0;i<books;i++)
        scanf("%d",&a[i]);
        scanf("%d",&budget);
        sort(a,a+books);
        min = 1000001;
        for(i=0;i<books;i++)
        {
            z = budget - a[i];
            p = binarysearch(i+1,books-1,z);
            if(p==1)
            {
                if(min> (z-a[i]))
                {
                    x = a[i];
                    y = z;
                }
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",x,y);
    }
    return 0;
}
