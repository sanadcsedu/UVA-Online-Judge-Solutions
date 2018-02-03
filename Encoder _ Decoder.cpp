#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<algorithm>
using namespace std;
char input[300],output[305],temp[5];
int main()
{
    int z,i,x,sum,k,n;
    while(gets(input)!=NULL)
    {
        memset(output,0,sizeof(output));
        z = strlen(input);
        if(isalpha(input[0]))
        {
            reverse(input,input+z);
            for (i = 0; input[i]; ++i){
				n = input[i];
				while (n != 0){
					printf("%d",n%10);
					n = n / 10;
				}
			}
			printf("\n");
        }
        else
        {
            for(k=0,i=z-1;i>=0;)
            {
                if(input[i]=='1')
                {
                    sum = (input[i]-'0')*100 + (input[i-1]-'0')*10 + (input[i-2]-'0');
                    output[k++] = sum;
                    i-=3;
                }
                else
                {
                    sum = (input[i]-'0')*10 + (input[i-1]-'0') ;
                    output[k++] = sum;
                    i-=2;
                }
            }
            puts(output);
        }

    }
    return 0;
}
