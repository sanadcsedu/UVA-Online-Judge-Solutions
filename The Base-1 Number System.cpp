#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<string>
#include<stack>
#include<queue>
#include<deque>
#include<stdlib.h>
#include<map>
#include<algorithm>
#include<list>
#include<vector>
#include<iostream>
#define pi acos(-1.0)
#define inf_max 2147483647
#define inf_min -2147483647

using namespace std;
char ch, bi[110], flag[1];
void append(int c)
{
    int i;
    if(c == 1)flag[0] = '1';
    else if(c==2)flag[0] = '0';
    else
    {
        c = c - 2;
        for(i=0; i<c; i++)
            strcat(bi, flag);
    }
}
long long int binary()
{
    long long int z, sum = 0, k, i;
    for(i=strlen(bi)-1, k=0; i>=0; i--, k++)
    {
        z = bi[i]-'0';
        sum+= z*pow(2, k);
    }
    return sum;
}
int main()
{
	int c=0;
    flag[0]='0';
	while(scanf("%c",&ch)==1)
	{
	    if(ch=='~')break;
        if(ch=='#')
		{
		    long long int z = binary();
            printf("%lld\n",z);
		    c = 0;
            flag[0] = '0';
            memset(bi, 0, sizeof(bi));
		}
        else if(ch=='0') c++;
        else 		{
            append(c);
            c = 0;
        }
	}
	return 0;
}

