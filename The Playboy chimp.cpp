#include<stdio.h>
int a[50005];
int binary(int start,int end,int item)
{
    int mid;
    while(1)
    {
        mid =(start+end)/2;
        if(a[mid]==item)return mid;
        if(start>end)return mid;
        else if(a[mid]>item)end = mid-1;
        else if(a[mid]<item)start= mid+1;
    }
}
int main()
{
    int q,i,n,mid,query;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&q);
    for(i=0;i<query;i++)
    {
         scanf("%d",&q);
         mid = binary(0,n-1,q);
         if ( a [mid] == q ) {
            if ( mid - 1 >= 0 ) printf ("%d", a [mid - 1]);
            else printf ("X");
            if ( mid + 1 < n ) printf (" %d", a [mid + 1]);
            else printf (" X");
            printf ("\n");
        }
        else {
            if ( a [mid] < q ) printf ("%d", a [mid]);
            else if ( mid - 1 >= 0 ) printf ("%d", a [mid - 1]);
            else printf ("X");
            if ( a [mid] > q ) printf (" %d", a [mid]);
            else if ( mid + 1 < n ) printf (" %d", a [mid + 1]);
            else printf (" X");
           printf ("\n");
        }
    }
    return 0;
}
