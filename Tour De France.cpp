#include<stdio.h>
#include<algorithm>
using namespace std;
double front_teeth[105],rear_teeth[105],drive[10005];
int main()
{
    double f,r,max,p;
    int i,k,j,z;
    for(;;)
    {
        scanf("%lf",&f);
        if(f==0)break;
        scanf("%lf",&r);
        for(i=0;i<f;i++)
        scanf("%lf",&front_teeth[i]);
        for(i=0;i<r;i++)
        scanf("%lf",&rear_teeth[i]);
        for(i=0,k=0;i<f;i++)
        {
            for(j=0;j<r;j++)
            {
                drive[k++]=rear_teeth[j]/front_teeth[i];
            }
        }
        z = f*r;
        sort(drive,drive+z);
        max = 0.0;
        for(i=1;i<z;i++)
        {
            p = drive[i]/drive[i-1];
            if(max<p)max = p;
        }
        printf("%.2lf\n",max);
    }
    return 0;
}
