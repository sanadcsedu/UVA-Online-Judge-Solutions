#include<stdio.h>
#include<string.h>

int main()
{

    char str1[30],str2[30],a[30],b[30];

    int ncase=0;
    scanf("%d\n",&ncase);
    //fflush(stdin);
    for(int i=1;i<=ncase;i++)
    {
        for(int w=0;w<30;w++)
        {
            str1[w]=0;
            str2[w]=0;
            a[w]=0;
            b[w]=0;
        }
        gets(str1);
        gets(str2);

        int x = strlen (str1);
        int y = strlen (str2);

        int z = strcmp(str1,str2);


        if(z==0)printf("Case %d: Yes\n",i);
        else
        {
            for(int q=0,k=0;k<x;k++)
            {
                if(str1[k]!=' ')
                {
                    a[q]=str1[k];
                    q++;
                }
            }
            for(int p=0,j=0;j<y;j++)
            {
                if(str2[j]!=' ')
                {
                    b[p]=str2[j];
                    p++;
                }
            }
            int l = strcmp(a,b);
            if(l==0)printf("Case %d: Output Format Error\n",i);
            else printf("Case %d: Wrong Answer\n",i);
        }

    }
}
