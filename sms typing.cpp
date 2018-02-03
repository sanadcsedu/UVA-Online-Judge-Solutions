#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d\n",&n);
    char str[10000];
    for(int j=1;j<=n;j++)
    {
        gets (str);
        int x = strlen(str);
        long int c=0;
        for(int i=0;i<x;i++)
        {
            if(str[i]=='a'|| str[i]=='d' || str[i]=='g' || str[i]=='j'|| str[i]=='m' || str[i]=='p' ||str[i]=='t' || str[i]=='w' || str[i]==' ')
            c+=1;
            else if(str[i]=='b' || str[i]=='e' || str[i]=='h' || str[i]=='k'|| str[i]=='n'|| str[i]=='q'|| str[i]=='u' || str[i]=='x')
            c+=2;
            else if(str[i]=='c' || str[i]=='f' || str[i]=='i' || str[i]=='l' || str[i]=='o' || str[i]=='r' || str[i]=='v' || str[i]=='y')
            c+=3;
            else if(str[i]=='s' || str[i]=='z')
            c+=4;
        }
            printf("Case #%d: %d\n",j,c);
    }
}
