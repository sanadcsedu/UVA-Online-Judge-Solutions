#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[20];
    int n,i,k;
    for(;;)
    {
        scanf("%s",str);
        if(str[1]=='x')
        {
            sscanf(str,"%X",&n);
            printf("%d\n",n);
        }
        else
        {
            n = atoi(str);
            if(n<0)break;
            else printf("0x%X\n",n);
        }
    }
    return 0;
}
