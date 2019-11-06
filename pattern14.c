#include<stdio.h>
int main()
{
	/* 4 4 4 4
	   3 3 3  
	   2 2 
	   1       */
	int i,j;
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",i);
		}
		printf("\n");
	}
	return 0;   
}
