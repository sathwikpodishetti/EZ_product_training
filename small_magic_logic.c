#include<stdio.h>
int i,j,n=3,k,c;
void rotate(int (*arr)[n],int n)
{
	int newarr[n][n];
	for(j=0;j<n;j++)
	{
		k=0;
		for(i=n-1;i>=0;i--)
		{
			newarr[j][k]=arr[i][j];
			k++;
		}
	}
	display(newarr,n);
}
void display(int (*arr)[n],int n)
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\nEnter your choice clockwise rotation(1),exit(2):");
	scanf("%d",&c);
	while(1)
	{
		if(c==1)
		{
			rotate(arr,n);
		}else if(c==2)
		{
			exit(0);
		}else{
			printf("---invalid input---");
		}
		printf("\nEnter your choice clockwise rotation(1),exit(2):");
		scanf("%d",&c);
	}
}
void main()
{
	int ke=0,ko=0;
	int even[n+1],odd[n+1],arr[n][n];
	//input
	for(i=1;i<=n*n;i++)
	{
		if(i%2==0)
		{
			even[ke]=i;
			ke++;
		}else{
			odd[ko]=i;
			ko++;
		}
	}
	//logic
	ke=0;
	ko--;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==n-1 && j==n-1)
			{
				arr[i-1][j-1]=odd[ko];
				ko--;
			}else if((i+j)%2==0)
			{
				arr[i-1][j-1]=even[ke];
				ke++;
			}else{
				arr[i-1][j-1]=odd[ko];
				ko--;
			}
		}
	}
	display(arr,n);
}
