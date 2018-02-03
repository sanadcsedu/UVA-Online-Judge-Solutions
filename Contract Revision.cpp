#include<stdio.h>
#include<string.h>
char str[1000000],error[1000000];
int main()
{
    long long int i,z,n,k;
    for(;;)
    {
        scanf("%lld %s",&n,str);
        if(n==0 && strcmp(str,"0")==0)break;
        for(i=0,k=0;str[i];i++){
            z = str[i]-'0';
            if(z!=n)error[k++]=str[i];
        }
        if(k==0 || error[0]=='0'){
            printf("0\n");
            continue;
        }
       for(i=0;i<k;i++)
       printf("%c",error[i]);
       printf("\n");
    }
    return 0;
}
