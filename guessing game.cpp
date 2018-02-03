#include<stdio.h>
#include<string.h>
char str[1100][1000];
int main()
{
   int num[1000]={0},flag = 0,i,j=0,real;
   for(i=0;;i++)
   {
       scanf("%d",&num[i]);
       getchar();
       if(num[i]==0)break;
       gets(str[i]);
       if(strcmp(str[i],"right on")==0)
       {
            flag = 0;
            real = num[i];
            for(j=i-1;j>=0;j--)
            {
                if(strcmp(str[j],"too high")==0 && real<num[j])flag = 0;
                else if(strcmp(str[j],"too low")==0 && real>num[j])flag = 0;
                else
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)printf("Stan is dishonest\n");
            else printf("Stan may be honest\n");
            i = -1;
       }
   }
   return 0;
}
