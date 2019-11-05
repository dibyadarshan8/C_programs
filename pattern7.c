#include<stdio.h>
int main()
{
	/*  3 3 3 3 
	    2 2 2 2
	    1 1 1 1  */
	int i,j;
	for(i=3;i>=1;i--)
	{
		for(j=1;j<=4;j++)
		{
			printf("%d\t",i);
		}
		printf("\n");
	}
	return 0;
}