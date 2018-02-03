#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char a[150][150];
    char output[150][150];
    int i,r,c,x,y,field,count,Flag=0;
    for(field=1;;field++)
    {
        memset(a,0,sizeof(a));
        memset(output,0,sizeof(output));
        scanf("%d %d",&r,&c);
        if(r==0 && c==0)break;
        for(i=0;i<r;i++)
            scanf("%s",a[i]);
        for(x=0;x<r;x++)
        {
            for(y=0;y<c;y++)
            {
                if(a[x][y]!='*')
                {
                        count = 0;
                        if(a[x+1][y]=='*')count++;
                        if(a[x+1][y+1]=='*')count++;
                        if(a[x][y+1]=='*')count++;
                        if(a[x][y-1]=='*')count++;
                        if(a[x-1][y]=='*')count++;
                        if(a[x-1][y-1]=='*')count++;
                        if(a[x+1][y-1]=='*')count++;
                        if(a[x-1][y+1]=='*')count++;
                        output[x][y]= count + 48;
                }
                else output[x][y]='*';
            }
        }
        if (Flag==1)
			printf("\n");
		Flag = 1;
        printf("Field #%d:\n",field);
        for(i=0;i<r;i++)
            printf("%s\n",output[i]);
    }
    return 0;
}

