#include<stdio.h>
int main()
{
	/* 1 1 1 1
	   2 2 2 
	   3 3
	   4      */
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=4;j>=i;j--)
		{
			printf("%d\t",i);
		}
		printf("\n");
	}
	return 0;   
}
