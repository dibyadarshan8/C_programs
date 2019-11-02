#include<stdio.h>
int main()
{
	//check the character is vowel or consonant.
	char ch;
	printf("Enter any character:");
 	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':printf("Vowel\n"); break;
		default: printf("Consonant\n");
	}
	return 0;
			
}