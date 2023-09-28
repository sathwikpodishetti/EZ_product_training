#include<stdio.h>
int main()
{
	int num,i,j=1,rem,sum;
	printf("num:");
	scanf("%d",&num);
	int temp=num;
	while(num!=0)
	{
		rem=num%10;
		sum+=rem;
		num=num/10;
	}
	printf("while sum:%d",sum);
	sum=0;rem=0;
	//with for
	for(i=0;i<j;i++)
	{
		rem=temp%10;
		sum+=rem;
		temp=temp/10;
		j++;
		if(temp==0)
		{
			i=j;
		}
		
	}
	printf("\nfor sum:%d",sum);
}
