#include<stdio.h>
#include<string.h>
char a[50],b[50],temp[50];
int main()
{
    int z,flag=0,i;
    while(scanf("%s %s",a,b)==2)
    {
        if(flag==1)printf("\n");
        flag = 1;
        memset(temp,0,sizeof(temp));
        printf("%s (to %s)\n",a,b);
        z = strlen(a);
        //strncpy(temp,a,z-2);
        for(i=0;i<z-2;i++)
        temp[i]=a[i];
        if(a[z-1]=='r' && a[z-2]=='a')
        {
            printf("eu        %so\n",temp);
            printf("tu        %sas\n",temp);
            printf("ele/ela   %sa\n",temp);
            printf("n%cs       %samos\n",243,temp);
            printf("v%cs       %sais\n",243,temp);
            printf("eles/elas %sam\n",temp);
        }
        else if(a[z-1]=='r' && a[z-2]=='e')
        {
            printf("eu        %so\n",temp);
            printf("tu        %ses\n",temp);
            printf("ele/ela   %se\n",temp);
            printf("n%cs       %semos\n",243,temp);
            printf("v%cs       %seis\n",243,temp);
            printf("eles/elas %sem\n",temp);
        }
        else if(a[z-1]=='r' && a[z-2]=='i')
        {
            printf("eu        %so\n",temp);
            printf("tu        %ses\n",temp);
            printf("ele/ela   %se\n",temp);
            printf("n%cs       %simos\n",243,temp);
            printf("v%cs       %sis\n",243,temp);
            printf("eles/elas %sem\n",temp);
        }
        else printf("Unknown conjugation\n");

    }
    return 0;
}
