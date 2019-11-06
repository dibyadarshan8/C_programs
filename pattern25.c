#include<stdio.h>
int main()
{
	/* A B C D
	   A B C 
	   A B
	   A      */
	int i,j;
	for(i=68;i>=65;i--)
	{
		for(j=65;j<=i;j++)
		{
			printf("%c\t",j);
		}
		printf("\n");
	}
	return 0;   
}
