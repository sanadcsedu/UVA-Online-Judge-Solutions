#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    int dayc,dayb,monthc,monthb,yearc,yearb,age;
    for(int i=1;i<=t;i++)
    {
        scanf("%d/%d/%d",&dayc,&monthc,&yearc);
        scanf("%d/%d/%d",&dayb,&monthb,&yearb);

        age = yearc - yearb;

        if(age>131)printf("Case #%d: Check birth date\n",i);
        else if(age==131 && monthb == monthc && dayc>=dayb)printf("Case #%d: Check birth date\n",i);
        else
        {
            if(monthc<monthb)age--;
            else if(monthc == monthb && dayc<dayb)age--;

            if(age <0)printf("Case #%d: Invalid birth date\n",i);
            else printf("Case #%d: %d\n",i,age);
        }


    }
}
