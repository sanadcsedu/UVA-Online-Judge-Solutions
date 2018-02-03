#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    double holex[1005],holey[1005];
    int n,i,flag;
    double gx,gy,dx,dy,gopher,dog;
    while(scanf("%d %lf %lf %lf %lf",&n,&gx,&gy,&dx,&dy)!=EOF)
    {
        flag = 0;
        for(i=0;i<n;i++)
            scanf("%lf %lf",&holex[i],&holey[i]);
        for(i=0;i<n;i++)
        {
            gopher = pow((holex[i]-gx),2)+pow((holey[i]-gy),2);
            dog = pow((holex[i]-dx),2)+pow((holey[i]-dy),2);
            if(gopher*4<=dog)
            {
                flag =1;
                printf("The gopher can escape through the hole at (%.3lf,%.3lf).\n",holex[i],holey[i]);
                break;
            }
        }
        if(flag==0)printf("The gopher cannot escape.\n");
    }
    return 0;
}
