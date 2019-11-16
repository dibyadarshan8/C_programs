/* Write a program to find the simple interest for given principal amount P, time Tm(in years) and rate R.

Input:
The first line of input contains an integer, the number of test cases T. Each test case should contains three lines input . First line contains P then Tm and R in the last line.

Output:
For each testcase in new line, print the floor value of the simple interest

Constraints:
1 <= T <= 100
1 <= P <= 103
1 <= Tm <= 20
1 <= R <= 20


Example:
Input:
2
42
8
15
501
10
5

Output:
50
250

Explanation:
Testcase 1: Simple interest of given principal amount 42, in 8 years at a 15% rate of interest is 50.
*/
#include<stdio.h>
#include<math.h>
int main()
{
	float P,Tm,R,s;
	int i,T;
	scanf("%d",&T);
	if(T<=100&&T>=1)
	{
	    for(i=0;i<T;i++)
	    {
	    scanf("%g",&P);
	    if(P<=1000&&P>=1)
	    {
	        scanf("%g",&Tm);
	        if(Tm<=20&&Tm>=1)
	        {
	            scanf("%g",&R);
	            if(R<=20&&R>=1)
	            {
	                s=(P*R*Tm)/100;
	                printf("%g\n",floor(s));
	                s=0.0;
	            }
	        }
	    }
	    }
	}
	return 0;
}