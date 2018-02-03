#include<stdio.h>
#include<ctype.h>

int vowel(char x)
{
    if (x=='A'|| x=='a' || x=='E' || x=='e' || x=='I' || x=='i' || x=='O' || x=='o' || x=='u' || x=='U')
    return 1;

    return 0;

}
int main()
{
    char save,ch;
    while(ch = getchar())
    {
        if (ch == EOF)
        return 0;

        if(isalpha(ch))
        {
            if(vowel(ch))
            {
                while(isalpha(ch)){
                printf("%c",ch);
                ch = getchar();
                }
                 printf("ay");
            }
            else
            {
                save = ch;
                ch = getchar();

                while(isalpha(ch)){
                printf("%c",ch);
                ch = getchar();
                }

                printf("%cay",save);
            }
        }
        printf("%c",ch);
    }
}
