#include<stdio.h>
int main(){
	int i,j,a[i][j],coins[i],w,noc,k;
	//noc=number of coins= basically size of coins;
	printf("Enter size of coins i.e no of coins");
	scanf("%d",&noc);
	printf("Enter the coins");
	for(i=0;i<noc;i++)
	{
		scanf("%d",&coins[i]);
	}
	printf("Enter the coin sum to be calculated");
	scanf("%d",&w);
	
	for(i=0;i<noc;i++)
	{
		for(j=0;j<w;j++)
		{
			
			if(j==0)
			{
				a[i][j]=1;
			}
			else
			{
		      if(i=0 && j!=0)
		     	{
			    	if(j%2==0)
					{
				    	a[i][j]=0;
			    	}
			        else
			        {
				    	a[i][j]=1;
				    }
			    }
			else {
			if(i==0 || j==0)
			{
		}
		else{
				if(coins[i]>j)
				{
					a[i][j]=a[i-1][j];
				}
				else
				{
					a[i][j]=a[i-1][j]+a[i][j-coins[i]];
				}
		}
			
			}
		}
		}
	}
	for(i=0;i<noc;i++)
	{
		for(j=0;j<w;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
}
