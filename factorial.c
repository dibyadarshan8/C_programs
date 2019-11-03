#include<stdio.h>
int main()
{
	//find factorial of a number.
	int n,fact=1;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n<0)
		printf("Invalid input\n");
	for(n;n!=0;n--)
	{
		fact=fact*n;
	}
	printf("Factorial=%d\n",fact);
	return 0;
}