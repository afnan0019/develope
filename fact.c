#include<stdio.h>
void main()
{
	int n,i;
	unsigned long long factorial=1;
	printf("enter an integer");
	scanf("%d",&n);
	if (n<0)
	printf("error! factorial of negative number do not exist.");
	else
	{
		for(i=1;i<=n;i++)
		{
			factorial=factorial*i;
		}
		printf("factorial of %d =%llu",n,factorial);
	}
}
