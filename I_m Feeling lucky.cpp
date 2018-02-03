#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct lucky
{
    char URL[100];
    int relevence;
};
int main()
{
    struct lucky google[10];
    int tcase,i,j;
    scanf("%d\n",&tcase);
    for(i=1;i<=tcase;i++)
    {
        for(j=0;j<10;j++)
        scanf("%s %d",&google[j].URL,&google[j].relevence);

        int max = 0;
        for(j=0;j<10;j++)
        {
            if(max<google[j].relevence)
            max = google[j].relevence;
        }
        printf("Case #%d:\n",i);
        for(j=0;j<10;j++)
        {
            if(max==google[j].relevence)printf("%s\n",google[j].URL);
        }
    }
    return 0;
}
