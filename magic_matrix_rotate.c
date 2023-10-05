#include<stdio.h>
int i,j,n=3,k,c;
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

	printf("\nif clockwise=1 ,aniclock wise=0:");
	scanf("%d",&c);
	while(1)
	{
		if(c==1)
		{
			transpose(arr,n,c);
			
		}else if(c==0){
			rotate(arr,n,c);
		}else if(c==2){
			exit(0);
		}else{
			printf("enter valid num:");
		}
		printf("\nif clockwise=1 ,aniclock wise=0:");
		scanf("%d",&c);
	}
}
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
		display(trans,n);
		
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
		display(rot,n);
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

	

