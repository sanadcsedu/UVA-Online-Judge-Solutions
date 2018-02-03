#include<stdio.h>
#include<string.h>
bool input[100005];
int fre[100005], output[100005];
int main()
{
    int k, n, i, x;
    k = 0;
    while(scanf("%d",&n)!=EOF)
    {
        x = n + 50000;
        if(!input[x])
        {
            output[k++] = n;
            input[x] = true;
        }
        fre[x]++;
    }
    for(i = 0; i< k ; i++)
        printf("%d %d\n",output[i], fre[output[i] + 50000]);
    return 0;
}
