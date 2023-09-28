#include<stdio.h>
int search(int *arr,int e,int n)
{
	int i,flag=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==e)
		{
			flag=1;
		}
	}
	return flag;
}
int main()
{
	int i,n,e;
	printf("enter array size:");
	scanf("%d",&n);
	int arr[n];
	printf("\nenter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nsearch element:");
	scanf("%d",&e);
	
	if(search(arr,e,n)==1)
	{
		printf("element found");
	}else{
		printf("element not found");
	}
	
	
}
