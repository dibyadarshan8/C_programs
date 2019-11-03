#include<stdio.h>
int main()
{
	//check whether a number is positive or negative.
	int n;
	printf("Enter a number n:");
	scanf("%d",&n);
	if(n!=0)
	{
		if(n<0)
			printf("%d is negative\n",n);	
		else
			printf("%d is positive\n",n);
	}
	else
		printf("You Entered 0, which is neither positive nor negative\n");
	return 0;
}