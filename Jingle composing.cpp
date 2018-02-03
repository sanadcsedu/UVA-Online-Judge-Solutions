#include<stdio.h>
#include<string.h>
#include<map>
using namespace std;
map < char,int > note;
char str[310];
int main()
{
	note['W']=64;note['H']=32;note['Q']=16;note['E']=8;note['S']=4;note['T']=2;note['X']=1;
    while(scanf("%s",str) && str[0]!='*')
	{
        int c=0,sum=0;
		for(int i=0;str[i];i++)
		{
			if(str[i]=='/')
			{
				if(sum==64)c++;
				sum = 0;
			}
			else
				sum += note[str[i]];
		}
		printf("%d\n",c);
		 memset(str, 0 ,sizeof(str));
	}
	return 0;
}

