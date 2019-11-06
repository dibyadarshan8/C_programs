#include<stdio.h>
int main()
{
	/* 1
	   2 1  
	   3 2 1 
	   4 3 2 1   */
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
	return 0;   
}
