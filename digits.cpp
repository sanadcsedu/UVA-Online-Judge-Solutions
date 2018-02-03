#include<stdio.h>
#include<string.h>

int main()
{
    char n[1000001];
    for(;;)
    {
        scanf("%s",n);

        if(!strcmp(n, "END" ))break;
        if(!strcmp(n, "1")){puts("1");   continue;}

        int x = strlen (n),temp,y,c = 1;

        for(;;)
        {
            temp = x;
            y = 0;
            while(temp>0)
            {
                y++;
                temp =temp/10;
            }

            if(x==y)break;
            else{
            c++;
            x = y;
            }
        }
        printf("%d\n",c+1);
    }
    return 0;
}

