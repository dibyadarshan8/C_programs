#include<stdio.h>
int main()
{
	/*  D C B A
	    D C B
	    D C
	    D     */
	int i,j;
	for(i=65;i<=68;i++)
	{
		for(j=68;j>=i;j--)
		{
			printf("%c\t",j);
		}
		printf("\n");
	}
	return 0;
}				
