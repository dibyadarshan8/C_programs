#include<stdio.h>
int main()
{
 	/* 0
	   1 1 
	   0 0 0
	   1 1 1 1  */
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d\t",i%2);
		}
		printf("\n");
	}
	return 0;   
}
