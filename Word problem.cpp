#include<stdio.h>
#include<string.h>
char dictionary[1004][20],input[1000],puzzle[1000];

int main()
{
    int j,k,p,q,d=0,flag,c;
    while ( gets (dictionary[d]) && strcmp (dictionary[d], "#") != 0 ) d++;

     while ( gets (input) && strcmp (input, "#") != 0 )
     {
            c = 0;
            for(j=0;j<d;j++)//dic
            {
                strcpy(puzzle,input);
                for(p=0;dictionary[j][p];p++)
                {
                    flag=0;
                    for(q=0;puzzle[q];q++)
                    {
                        if(dictionary[j][p]==puzzle[q])
                        {
                            flag=1;
                            puzzle[q]=' ';
                            break;
                        }
                    }
                    if(flag!=1)break;
                }
                if(flag==1)c++;
            }
            printf("%d\n",c);
     }
    return 0;
}

