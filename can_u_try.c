#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	printf("display:\n");
	for(i=n;i>=1;i=i/2)
	{
		printf("%d ",i);
	}
}
