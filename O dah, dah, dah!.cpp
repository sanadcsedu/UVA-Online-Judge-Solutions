#include<cstdio>
#include<string>
#include<map>
#include<string.h>
using namespace std;
map <string,char> morse;
char code[2005],temp[10];
int main()
{

    morse[".-"] = 'A'; morse["-..."] = 'B'; morse["-.-."] = 'C'; morse["-.."] = 'D';
    morse["."] = 'E'; morse["..-."] = 'F'; morse["--."] = 'G'; morse["...."] = 'H';
    morse[".."] = 'I'; morse[".---"] = 'J'; morse["-.-"] = 'K'; morse[".-.."] = 'L';
    morse["--"] = 'M'; morse["-."] = 'N'; morse["---"] = 'O'; morse[".--."] = 'P';
    morse["--.-"] = 'Q'; morse[".-."] = 'R'; morse["..."] = 'S'; morse["-"] = 'T';
    morse["..-"] = 'U'; morse["...-"] = 'V'; morse[".--"] = 'W'; morse["-..-"] = 'X';
    morse["-.--"] = 'Y'; morse["--.."] = 'Z';
    // Numeric
    morse["-----"] = '0'; morse[".----"] = '1'; morse["..---"] = '2';
    morse["...--"] = '3'; morse["....-"] = '4'; morse["....."] = '5';
    morse["-...."] = '6'; morse["--..."] = '7'; morse["---.."] = '8'; morse["----."] = '9';
    // Punctuation
    morse[".-.-.-"] = '.'; morse["--..--"] = ','; morse["..--.."] = '?';
    morse[".----."] = '\''; morse["-.-.--"] = '!'; morse["-..-."] = '/';
    morse["-.--."] = '('; morse["-.--.-"] = ')'; morse[".-..."] = '&';
    morse["---..."] = ':'; morse["-.-.-."] = ';'; morse["-...-"] = '=';
    morse[".-.-."] = '+'; morse["-....-"] = '-'; morse["..--.-"] = '_';
    morse[".-..-."] = '\"'; morse[".--.-."] = '@';

    int tcase,i,j,k,flag;
    scanf("%d",&tcase);
    getchar();
    for(i=1;i<=tcase;i++)
    {
        memset(temp,0,sizeof(temp));
        gets(code);
        printf("Message #%d\n",i);
        for(j=0,k=0,flag=0;code[j];j++)
        {
            if(code[j]==' ')
            {
                if(flag==1)printf(" ");
                else
                {
                    printf("%c",morse[temp]);
                    k=0;
                    memset(temp,0,sizeof(temp));
                    flag = 1;
                }

            }
            else
            {
                flag = 0;
                temp[k++]= code[j];
            }
        }
        if(flag==0)printf("%c",morse[temp]);
        printf("\n");
        if(i!=tcase)printf("\n");
    }
    return 0;
}
