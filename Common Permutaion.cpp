#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    char a[100000],b[100000];
    int i,j,x,y;
    while(gets(a)!=NULL)
    {
        gets(b);
        x = strlen(a);
        y = strlen(b);
        sort(a,a+x);
        sort(b,b+y);
        for(i=0;a[i];i++)
        {
            for(j=0;b[j];j++)
            {
                if(a[i]==b[j])
                {
                    printf("%c",a[i]);
                    b[j]='*';
                    break;
                }
            }

        }
        printf("\n");
    }
}
