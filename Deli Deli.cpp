#include<stdio.h>
#include<string.h>
int consonant(char a)
{
    char v[]="aeiou";
    for(int i=0;i<5;i++)
    if(v[i]==a)return 0;
    return 1;
}
char irre1[35][35],irre2[35][35],plurals[35];
int main()
{

    int flag,L,N,i,j,z;
    scanf("%d %d",&L,&N);
    for(i=0;i<L;i++)
    scanf("%s %s",irre1[i],irre2[i]);
    for(i=0;i<N;i++)
    {
        memset(plurals,0,sizeof(plurals));
        flag = 0;
        scanf("%s",plurals);
        for(j=0;j<L;j++)
        {
            if(strcmp(irre1[j],plurals)==0)
               {
                 printf("%s\n",irre2[j]);
                 flag =1;
               }
        }
        if(flag==0)
        {
            z = strlen(plurals);
            if(consonant(plurals[z-2]) && plurals[z-1]=='y')
            {
                plurals[z-1]='i';
                plurals[z]='e';
                plurals[z+1]='s';
            }
            else if(plurals[z-1]=='o' || plurals[z-1]=='s'||plurals[z-1]=='x'||(plurals[z-1]=='h'&&(plurals[z-2]=='c'||plurals[z-2]=='s')))
            strcat(plurals,"es");
            else
            strcat(plurals,"s");
            printf("%s\n",plurals);
        }
    }
    return 0;
}
