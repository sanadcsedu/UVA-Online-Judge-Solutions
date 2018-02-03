/*program for measuring the angle between the minute head and the hour head of an analohg clock*/
#include<stdio.h>
#include<math.h>

int main()
{
    int hour,minute;
     double hour_angle,minute_angle,angle;
    for(;;){


    scanf("%d:%d",&hour,&minute);
    if(hour == 0 && minute == 0)break;


    hour_angle=hour*30+0.5*minute;
    minute_angle=minute*6;

    angle=fabs(hour_angle-minute_angle);

    if(angle>180)
    {
        angle=360-angle;
    }
    printf("%.3lf\n",angle);

    }
    return 0;
}
