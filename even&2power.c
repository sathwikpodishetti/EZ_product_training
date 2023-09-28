#include<stdio.h>
#include <math.h>
void main()
{
	int l,u,i=0,j;
	printf("enter lower and upper bound:");
	scanf("%d %d",&l,&u);
	int n=u-l,k=l;
	int arr[n];
	printf("even nums:\n");
	while(l<=u)
	{
		if(l%2==0)
		{
			arr[i]=l;
			printf("%d ",arr[i]);
			i++;
		}
		l++;
	}
	printf("\n2 power values:");
	i=0;
	while(i<n)
	{
		for(j=2;j<k;j++)
		{
			if(arr[i]==pow(2, j))
			{
				printf("%d ",arr[i]);
			}
		}
		i++;
		
	}
	
	
}
