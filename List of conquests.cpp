#include<stdio.h>
#include<string.h>
char input[2012][100], temp[100];
struct country
{
    char name[100];
    int fre;
}c[2012],x;
int main()
{
    int lines=0,i=0,p=0,j=0,s=0,k=0,z=0;
    scanf("%d",&lines);
    getchar();
    for(i=0;i<lines;i++)
    gets(input[i]);
    for( i=0 , s=0 ; i<lines ; i++)
    {
        memset(temp,0,sizeof(temp));
        for(j=0,k=0;;j++)
        {
            if(input[i][j]==' ')break;
            else temp[k++] = input[i][j];
        }
        for(p=0;p<s;p++)
        {
            z = strcmp(temp,c[p].name);
            if(z==0)
            {
                c[p].fre++;
                break;
            }
        }
        if(p==s)
        {
            strcpy(c[s].name,temp);
            c[s].fre++;
            s++;
        }
    }
        for(i=0;i<s-1;i++)
        {
            for(j=i+1;j<s;j++)
            if(strcmp(c[i].name,c[j].name)>0)
            {
                x = c[i];
                c[i]=c[j];
                c[j]= x;
            }
        }
        for(p=0;p<s;p++)
        printf("%s %d\n",c[p].name,c[p].fre);

    return 0;
}
