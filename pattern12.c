#include<stdio.h>
int main()
{
	/* 1
	   1 0 
	   1 0 1
	   1 0 1 0 */
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",j%2);
		}
		printf("\n");
	}
	return 0;   
}
