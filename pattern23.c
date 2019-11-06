#include<stdio.h>
int main()
{
	/* D C B A
	   D C B A
	   D C B A      */
	int i,j;
	for(i=1;i<=3;i++)
	{
		for(j=68;j>=65;j--)
		{
			printf("%c\t",j);
		}
		printf("\n");
	}
	return 0;   
}
