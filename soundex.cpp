#include<stdio.h>
#include<string.h>
int fnc_soundex(char ch)
{
     if(ch=='B' ||ch=='F' ||ch=='P' ||ch=='V')return 1;
     else if(ch=='C' ||ch=='G' ||ch=='J' ||ch=='K'||ch=='Q'||ch=='S'||ch=='X'||ch=='Z' )return 2;
     else if (ch=='D'||ch=='T')return 3;
     else if(ch=='L')return 4;
     else if(ch=='M'||ch=='N')return 5;
     else if(ch=='R')return 6;
     else return 0;
}
int main()
{
    char a[25];
    while(scanf("%s",a)!=EOF)
    {
        int x=0,holdx = 0;
        for(int i=0;a[i];i++)
        {
            x = fnc_soundex(a[i]);
            if(holdx != x && x!= 0)printf("%d",x);
            holdx = x;
        }
        printf("\n");
    }

}
