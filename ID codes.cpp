#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    char str[60];
    int n;
    for(;;)
    {
        scanf("%s",str);
        if(strcmp(str,"#")==0)break;
        n = strlen(str);
        if(next_permutation(str,str+n))printf("%s\n",str);
        else printf("No Successor\n");
    }
    return 0;
}
