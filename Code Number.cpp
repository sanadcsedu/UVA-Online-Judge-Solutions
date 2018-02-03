#include<stdio.h>
#include<string.h>
int main()
{
    char text[2000];
    int tcase,i;
    char k[]="OIZEASGTBP";
    scanf("%d",&tcase);
    getchar();
    while(gets(text))
    {
        for(i=0;text[i];i++)
            if(text[i]>='0' && text[i]<='9')
            text[i]=k[text[i]-'0'];
        puts(text);
    }
    return 0;
}
