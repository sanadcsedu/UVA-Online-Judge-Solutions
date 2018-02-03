#include<stdio.h>
#include<string.h>
long double x = 10000000.0/8640000.0;
int main()
{
    char a[10];
    int hour, minute, second, c, ans, sec;
    while(scanf("%s",a)!=EOF)
    {
        hour = (a[0]-'0')*10 + (a[1]-'0');
        minute = (a[2]-'0')*10 + (a[3]-'0');
        second = (a[4]-'0')*10 + (a[5]-'0');
        c = (a[6]-'0')*10 + (a[7]-'0');
        sec = (((hour*60+minute)*60+second)*100)+c;
        ans = sec*x;
        printf("%07d\n",ans);
        memset(a,0,sizeof(a));
    }
    return 0;
}
