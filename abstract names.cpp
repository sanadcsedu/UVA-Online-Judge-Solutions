#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,l1,l2,change;
    char x[500],y[500];
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
		 gets(x);
		 gets(y);
		 l1=strlen(x);
		 l2=strlen(y);
		 change=0;
		 if(l1!=l2)
		 printf("No\n");
		 else
		 {
		  for(i=0;i<l1;i++)
		  {
			  if(x[i]!=y[i])
			  {
				 if((x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')&&(y[i]=='a'||y[i]=='e'||y[i]=='i'||y[i]=='o'||y[i]=='u'))
				  change=0;
				  else
				  change=1;
              }
          }
            if(change==1)printf("No\n");
            else printf("Yes\n");
        }
}
				return 0;
}
