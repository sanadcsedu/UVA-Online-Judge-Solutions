#include<stdio.h>
#include<math.h>
int main()
{
    int h1,h2,m1,m2,time,x;
    for(;;)
    {
        scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
        if(h1==0 && h2==0 && m1==0 && m2==0)break;
        if(h1<h2 && m1 <= m2)time = (h2-h1)*60 + fabs(m2 - m1);
        else if(h1<h2 && m1>m2)time = (h2-h1)*60 + (60-m1+m2) - 60;
        else if(h1==h2 && m1<=m2)time = m2-m1;
        else if(h1==h2 && m1>m2)time =  1440 + m2 - m1;
        else if(h1>h2 && m1 <= m2)time = (24-fabs(h2-h1))*60 + fabs(m2 - m1);
        else if(h1>h2 && m1 > m2)time = (24-fabs(h2-h1))*60 + (60-m1+m2)-60;

        printf("%d\n",time);
    }
    return 0;
}

