#include<stdio.h>
int main()
{
	//Simple calculator.
	int a,b,i;
	printf("Enter two numbers a and b respectively:");
	scanf("%d%d",&a,&b);
	printf("Choice:\n1.Addition\n2.Multiplication\n3.Subtraction\n4.Division\n");															
	printf("Enter a Choice:");
	scanf("%d",&i);
	switch(i)
	{
		case 1: printf("Result=%d\n",a+b); break;
		case 2: printf("Result=%d\n",a*b); break;
		case 3: printf("Result=%d\n",a-b); break;
		case 4: printf("Result=%d\n",a/b); break;
		default: printf("Invalid Choice\n"); 
	}
	return 0;
}