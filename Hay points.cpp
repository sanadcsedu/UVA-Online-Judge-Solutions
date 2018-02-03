#include<cstdio>
#include<cstring>
#include<string>
#include<map>
#include<algorithm>
using namespace std;
char tasks[20],input[100];
int main ()
{
    map <string , int > works;
    map<string , int>::iterator it;
    int i,m,n,money,sum,j,k;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        scanf("%s %d",tasks,&money);
        works[tasks] = money;
    }
    for(i=0;i<n;i++)
    {
        sum = 0;
        while(1)
        {
            scanf("%s",input);
            if(input[0]=='.')break;
            sum += works[input];
        }
        printf("%d\n",sum);
    }
    return 0;
}

