#include<stdio.h>
int main()
{
	//Fibonacci sequence(1,1,2,3,5,...).
	int a=1,b=1,c,n,count=0;
	printf("Enter the total number of terms for the sequence:");
	scanf("%d",&n);
	while(count<n)
	{
		if(count==n-1)
			printf("%d",a);
		else
			printf("%d,",a);
		c=a+b;
		a=b;
		b=c;
		count++;
	}
	return 0;
}