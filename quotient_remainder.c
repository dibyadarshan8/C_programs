#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers such that a is divided by b:");
	scanf("%d%d",&a,&b);
	printf("Quotient=%d\nRemainder=%d\n",a/b,a%b);
	return 0;
}