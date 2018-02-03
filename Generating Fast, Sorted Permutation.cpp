#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    char a[15];
    int tcase,i,z;
    scanf("%d",&tcase);
    for(i=0;i<tcase;i++)
    {
        scanf("%s",a);
        z = strlen(a);
        sort(a,a+z);
        do
        printf("%s\n",a);
        while(next_permutation(a,a+z));
        printf("\n");
    }
    return 0;
}
