#include<stdio.h>
int i,j,n,k,c;
void transpose(int (*arr)[n],int n,int c)
{
	int trans[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			trans[i][j]=arr[j][i];
		}
	}
	if(c==1)
	{
		rotate(trans,n,c);
	}else{
		printf("output matrix  anti clock wise:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d ",trans[i][j]);
			}
			printf("\n");
		}
	}
	
}
void rotate(int (*arr)[n],int n,int c)
{
	int rot[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0,k=n-1;j<n || k>=0;j++,k--)
		{
			rot[i][j]=arr[i][k];	
		}
	}
	if(c==0)
	{
		transpose(rot,n,c);
	}else{
		printf("output matrix clock wise:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d ",rot[i][j]);
			}
			printf("\n");
		}
	}
	
}
void main()
{
	printf("enter matrix size:");
	scanf("%d",&n);
	int mat[n][n],trans[n][n];
	printf("enter matrix elements:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	printf("\nif clockwise=1 ,aniclock wise=0:");
	scanf("%d",&c);
	if(c==1)
	{
		transpose(mat,n,c);
		
	}else if(c==0){
		rotate(mat,n,c);
	}else{
		printf("enter valid num:");
	}
	
	
	
}

