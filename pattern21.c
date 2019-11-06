#include<stdio.h>
int main()
{
	/* A B C D
	   A B C D
	   A B C D      */
	int i,j;
	for(i=65;i<=67;i++)
	{
		for(j=65;j<=68;j++)
		{
			printf("%c\t",j);
		}
		printf("\n");
	}
	return 0;   
}
