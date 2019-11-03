#include<stdio.h>
int main()
{
	//find the sum of natural numbers.
	int i,n,sum=0;
	printf("Enter a natural number upto which the sum is calculated:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("Sum=%d\n",sum);
	return 0;
}