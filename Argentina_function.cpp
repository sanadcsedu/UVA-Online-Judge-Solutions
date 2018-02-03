#include<stdio.h>
#include<string.h>
struct players
{
    char name[25];
    int attack;
    int defence;
}rating[10],temp;
void swap(int i,int j)
{
    temp = rating[i];
    rating[i]=rating[j];
    rating[j]=temp;
}
void name_sort(int i,int j)
{
    if(strcmp(rating[i].name,rating[j].name)>0)
    {
        temp = rating[i];
        rating[i]=rating[j];
        rating[j]=temp;
    }
}
int main()
{
    int tcase,i,j;
    scanf("%d",&tcase);
    for(int l=1;l<=tcase;l++)
    {
        for(i=0;i<10;i++)//input
        scanf("%s %d %d",rating[i].name,&rating[i].attack,&rating[i].defence);

        for(i=0;i<9;i++)//attack && defence sort
            for(j=i+1;j<10;j++)
            {
                if(rating[i].attack<rating[j].attack)swap(i,j);
                if(rating[i].attack==rating[j].attack)
                {
                    if(rating[i].defence>rating[j].defence)swap(i,j);
                    if(rating[i].defence==rating[j].defence)name_sort(i,j);
                }
            }
        //lexicographically sorting the names
        for(i=0;i<4;i++)
            for(j=i+1;j<5;j++)
                name_sort(i,j);

        for(i=5;i<9;i++)
            for(j=i+1;j<10;j++)
                name_sort(i,j);

        printf("Case %d:\n",l);
        printf("(");
        for(i=0;i<5;i++)
        {
            if(i!=4)printf("%s, ",rating[i].name);
            else printf("%s)\n",rating[i].name);
        }
        printf("(");
        for(i=5;i<10;i++)
        {
            if(i!=9)printf("%s, ",rating[i].name);
            else printf("%s)\n",rating[i].name);
        }
    }
    return 0;
}

