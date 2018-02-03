#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
    int median ,i,mid;
    int a[10050]={0};
    i = 1;
    while(scanf("%d",&a[i])!=EOF)
    {
        sort (a,a+i+1);
        if(i%2==0)
        {
            mid = i/2;
            median = a[mid] + a[mid+1];
            median /= 2;
        }
        else
        {
            mid = (i+1)/2;
            median = a[mid];
        }
        printf("%d\n",median);
        i++;
    }
}
