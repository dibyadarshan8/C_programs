#include<stdio.h>
int main()
{
	/* 4 3 2 1
	   3 2 1
	   2 1
	   1      */
	int i,j;
	for(i=4;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
	return 0;   
}
