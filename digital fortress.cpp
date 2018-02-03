#include<stdio.h>
#include<string.h>
#include<math.h>

int arrange(char p[],int y)
{
    char a[1000][1000];;
    int j=0,k=0,l=0;
    for(j=0,l=0;p[l];j++)
    {
        for(k=0;k<y;k++,l++)
        {
             a[j][k] = p[l];
        }
    }

    for(j=0;j<y;j++)
    {
        for(k=0;k<y;k++)
        {
             printf("%c",a[k][j]);
        }
    }
    printf("\n");
    return 1;

}

int main()
{
    char str[100050]={0};
    int i=0,n=0,x=0,z=0,h=0;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++)
    {
        gets(str);

        x = strlen (str);
        z = sqrt(x);

        if( x == z*z)
        {
            h = arrange(str,z);
        }
        else
        puts("INVALID");

    }

    return 0;

}
