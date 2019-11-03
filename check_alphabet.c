#include<stdio.h>
int main()
{
	//check a character is an alphabet or not.
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
		printf("Entered character is an alphabet\n");
	else
		printf("Entered character is not an alphabet\n");
	return 0;
}