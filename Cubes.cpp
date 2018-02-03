#include<stdio.h>
#include<math.h>
#define max 60
int main()
{
    int cube[max];
    int i,j,z,flag;
    for(i=1;i<max;i++)
        cube[i] = i * i * i;
    int n,x,y;
    while(scanf("%d",&n)==1 && n!=0)
    {
        flag = 0;
        for(i=1;i<max;i++)
        {
            for(j=i;j<max;j++)
            {
                z = cube[j]-cube[i];
                if(z==n)
                {
                    flag = 1;
                    break;
                }
                if(z>n)break;
            }
            if(flag==1)break;
        }
        if(flag==1)printf("%d %d\n",j,i);
        else printf("No solution\n");
    }
    return 0;
}
