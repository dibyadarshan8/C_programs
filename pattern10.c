#include<stdio.h>
int main()
{
	/* 1
    	   0 0
	   1 1 1 
	   0 0 0 0  */
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",i%2);
		}
		printf("\n");
	}
	return 0;
}
