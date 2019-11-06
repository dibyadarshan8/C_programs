#include<stdio.h>
int main()
{
	/* A A A A
	   B B B B 
	   C C C C      */
	int i,j;
	for(i=65;i<=67;i++)
	{
		for(j=65;j<=68;j++)
		{
			printf("%c\t",i);
		}
		printf("\n");
	}
	return 0;   
}
