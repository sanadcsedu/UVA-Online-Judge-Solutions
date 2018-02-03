#include<stdio.h>
int main()
{
    char number[]="ABCDE";
    int tcase,i,mark[5],j,c;
    while(scanf("%d",&tcase)==1 && tcase!=0)
    {
        for(i=0;i<tcase;i++)
        {
            c = 0;
            for(j=0;j<5;j++)
            {
                scanf("%d",&mark[j]);
                if(mark[j]<=127)c++;
            }
            if(c==0 || c>1)printf("*\n");
            else
            {
                for(j=0;j<5;j++)
                if(mark[j]<=127)break;

                printf("%c\n",number[j]);
            }

        }
    }
    return 0;
}
