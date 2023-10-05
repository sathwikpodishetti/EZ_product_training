#include<stdio.h>
void main()
{
	int i,j,n;
	printf("enter matrix size:");
	scanf("%d",&n);
	int arr[100][100]={0};
	j=n-(n-1);
	for(i=0;i<n;i++)
	{
		if(j<n)
		{
			arr[i][j]=81;
			j=j+2;
			if(j>=n)
			{
				j=0;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i][j]!=0)
			{
				printf(" %c |",arr[i][j]);
			}else{
				printf("   |",arr[i][j]);
			}
		}
		printf("\n----------------\n");
	}
	printf("\nMirror image of matrix:\n\n");
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i][j]!=0)
			{
				printf(" %c |",arr[i][j]);
			}else{
				printf("   |",arr[i][j]);
			}
			
		}
		printf("\n----------------\n");	
	}
	
}
