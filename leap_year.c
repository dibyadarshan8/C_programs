#include<stdio.h>
int main()
{
	//check leap year or not.
	int yr;
	printf("Enter a year:");
	scanf("%d",&yr);
	if(yr%4==0)
	{
		if(yr%100==0)
		{
			if(yr%400==0)
				printf("A leap year\n");
			else
				printf("Not a leap year\n");
		}
		else
			printf("A leap year\n");
	}
	else
		printf("Not a  leap year\n");
}