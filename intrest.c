#include<stdio.h>
int main()
{
	int bal,i,intrest;
	printf("bal:");
	scanf("%d",&bal);
	printf("intrest per annum:");
	scanf("%d",&intrest);
	int permonth=((bal/100)*intrest)/12;
	for(i=1;i<=12;i++)
	{
		if(i<5)
		{
			bal=bal+permonth;
			permonth=((bal/100)*intrest)/12;
			printf("%d:%d\n",i,bal);
		}
		else if(i>=5 && i<9)
		{
			if(i==5)
			{
				bal=bal-25000;
			}
			bal=bal+permonth;
			permonth=((bal/100)*intrest)/12;
			printf("%d:%d\n",i,bal);
		}
		else if(i>=9 && i<=12)
		{
			if(i==9)
			{
				bal=bal+10000;
			}
			bal=bal+permonth;
			permonth=((bal/100)*intrest)/12;
			printf("%d:%d\n",i,bal);
		}
	}
	
	printf("%d",bal);
	
}
