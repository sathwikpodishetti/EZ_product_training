#include<stdio.h>
struct a{
	char x;
	double z;
	int y;	
};
int main()
{
	struct a yes;
	printf("%d",sizeof(yes));
	return 0;
}
