#include<stdio.h>
#include<string.h>
#include<math.h>

int prime(int z)
{
    int w = sqrt(z);
    for(int j=2;j<=w;j++)
    {
        if(z%j==0)return 1;
    }
    return 0;
}
int main()
{
    char ch[1000];

    while(scanf("%s",ch)!=EOF)
    {
        int x = strlen (ch);
        int sum = 0;
        for(int i=0;i<x;i++)
        {
            if(ch[i]>='a' && ch[i]<='z')
            sum = sum + (ch[i]-96);

            else
            sum = sum + (ch[i]-38);
        }
        if(prime(sum) == 1)
        {
            printf("It is not a prime word.\n");
        }
        else
        printf("It is a prime word.\n");
    }
    return 0;

}
