#include<stdio.h>
int main()
{
	/* 0
	   0 1 
	   0 1 0
	   0 1 0 1 */
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("%d\t",j%2);
		}
		printf("\n");
	}
	return 0;   
}
