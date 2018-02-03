#include<stdio.h>
#include<string.h>

int main()
{
    char text[1000];
    char letters[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    gets(text);
    int x = strlen(text);
    for(int i=0;i<x;i++)
    {
        for(int j=0;text[j];j++)
        if(text[i]==letters[j])text[i]=letters[j-2];
    }
    puts(text);
}
