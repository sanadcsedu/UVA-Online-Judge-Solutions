#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    int temp,tcase,top,north,west,south,east,i;
    for(;;)
    {
        scanf("%d",&tcase);
        if(tcase==0)break;
        top = 1;
        north = 2;
        west = 3;
        east = 4;
        south = 5;
        for(i=0;i<tcase;i++)
        {
            scanf("%s",str);
            if(strcmp(str,"north")==0)
            {
                temp = top;
                top = south;
                north = temp;
                south = 7 - north;
            }
            else if(strcmp(str,"east")==0)
            {
                temp = top;
                top = west;
                east = temp;
                west = 7-east;
            }
            else if(strcmp(str,"west")==0)
            {
                temp = top;
                top = east;
                west = temp;
                east = 7 - west;

            }
            else if(strcmp(str,"south")==0)
            {
                temp = top;
                top = north;
                south = temp;
                north = 7 - south;
            }
        }
        printf("%d\n",top);
    }
    return 0;
}
