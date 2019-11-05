#include<stdio.h>
int main()
{
	/*  4 3 2 1 
	    4 3 2 1 
	    4 3 2 1  */
	int i,j;
	for(i=1;i<=3;i++)
	{
		for(j=4;j>=1;j--)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
	return 0;
}