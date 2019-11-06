#include<stdio.h>
int main()
{
	/* C C C C
	   B B B B 
	   A A A A      */
	int i,j;
	for(i=67;i>=65;i--)
	{
		for(j=65;j<=68;j++)
		{
			printf("%c\t",i);
		}
		printf("\n");
	}
	return 0;   
}
