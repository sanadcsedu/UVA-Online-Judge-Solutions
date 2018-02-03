#include<stdio.h>
int a[105][105];
int main()
{
   int i,j,n,x,y,p,q,holdp,holdq;
    for(;;)
   {
       scanf("%d",&n);
       if(n==0)break;
       p = q =0;
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<n;i++)
        {
            x = y = 0;
            for(j=0;j<n;j++)
            {
                x += a[i][j];
                y += a[j][i];
            }
            if(x%2==1)
            {
                p++;
                holdp = i;
            }
            if(y%2==1)
            {
                q++;
                holdq= i;
            }
        }
        if(p==0 && q==0)printf("OK\n");
        else if(p==1 && q==1)printf("Change bit (%d,%d)\n",holdp+1,holdq+1);
        else printf("Corrupt\n");
   }
    return 0;
}
