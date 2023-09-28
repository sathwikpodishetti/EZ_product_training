#include<stdio.h>
int sum(int *arr,int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	return sum;
}
int main()
{
	int n;
	printf("length of array:");
	scanf("%d",&n);
	int arr[n];
	printf("\nenter array elements:");
	printf("%d",sum(arr,n));
}
