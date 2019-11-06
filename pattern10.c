#include<stdio.h>
int main()
{
	/* 4
	   4 3 
	   4 3 2
	   4 3 2 1 */
	int i,j;
	for(i=4;i>=1;i--)
	{
		for(j=4;j>=i;j--)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
	return 0;   
}
