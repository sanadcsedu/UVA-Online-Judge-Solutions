#include<stdio.h>

int main()
{

	long int i,j;
	printf("Enter i:");
	scanf("%lu",&i);
	printf("Enter j:");
	scanf("%lu",&j);
	long int flag=0,n;
	long int z=0,k;
	long int store=0;
	for(;;)
	{
		k=i+z;
		z++;
		if(k>j){break;}


		for(int p=1;;p++)
		{
			if(k%2==1){k=3*k+1;}
			else{k=k/2;}
			if(k==1)
			{
				flag=1;
				n=p+1;
				break;
			}
		}
		if(flag==1)
		{
		       if(store<n)
		       {
				store=n;
		       }
		}
	}
	printf("%lu %lu %lu\n",i,j,store);

	return 0;
}
