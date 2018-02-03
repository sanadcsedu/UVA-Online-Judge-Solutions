#include<stdio.h>
int main()
{
    char sign;
    int tcase,i,temp,hex1,hex2,res,j;
    scanf("%d",&tcase);
    for(i=0;i<tcase;i++)
    {
        int binary[15]={0};
        scanf("%x %c %x",&hex1,&sign,&hex2);
        j = 0;temp = hex1;
        while(temp){
            binary[j++]= temp%2;
            temp/=2;
        }
        for(j=12;j>=0;j--)printf("%d",binary[j]);
        if(sign=='+')
        {
            printf(" + ");
            res = hex1 + hex2;
        }
        else
        {
            printf(" - ");
            res = hex1 - hex2;
        }
        int b[15]={0};
        j = 0;temp = hex2;
        while(temp){
            b[j++]= temp%2;
            temp/=2;
        }
        for(j=12;j>=0;j--)printf("%d",b[j]);
        printf(" = %d\n",res);
    }
}

