#include<stdio.h>
int main()
{
	//generate multiplication table.
	int n,i,mult;
	printf("Enter a number whose multiplication table to be generated:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		mult=n*i;
		printf("%d*%d=%d\n",n,i,mult);
	}
	return 0;
}