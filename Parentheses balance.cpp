#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<vector>
using namespace std;
char a[130],ch,str[15];
int main()
{
	stack < char > p;
	int tcase,i,j;
	gets(str);
    sscanf(str,"%d",&tcase);
    //scanf("%d",&tcase);
	for(i=0;i<tcase;i++)
	{
	    while(!p.empty())p.pop();
		gets(a);
        for(j=0;a[j];j++)
		{
		    if(!p.empty())
		    {
		        ch = p.top();
                if((ch=='('&&a[j]==')')||(ch=='['&&a[j]==']'))p.pop();
                else p.push(a[j]);
            }
            else p.push(a[j]);
        }
		if(p.empty())printf("Yes\n");
		else printf("No\n");
    }
	return 0;
}
