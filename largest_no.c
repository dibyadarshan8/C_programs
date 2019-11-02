#include<stdio.h>
int main()
{
	//largest between three numbers.
	int n1,n2,n3,x;
	printf("Enter the three numbers n1,n2 and n3 respectively:");
	scanf("%d%d%d",&n1,&n2,&n3);
	x=((n1>n2)&&(n1>n3))?printf("n1 is largest\n"):(n2>n3?printf("n2 is largest\n"):printf("n3 is largest\n"));
	return 0;
}