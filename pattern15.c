#include<stdio.h>
int main()
{
	/* 4 3 2 1
	   4 3 2 
	   4 3
	   4      */
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=4;j>=i;j--)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
	return 0;   
}
