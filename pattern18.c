#include<stdio.h>
int main()
{
	/* 1 2 3 4
	   2 3 4 
	   3 4
	   4      */
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=i;j<=4;j++)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
	return 0;   
}
