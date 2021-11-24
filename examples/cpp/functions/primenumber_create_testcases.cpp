#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define MAXVALUE  1000	// Max random value
#define TESTCASES 100	// Number of test cases

int isPrimeNumber(int n)
{
	if(n < 2) return 0;
	for(int i=2; i <= int(sqrt(n)); i++)
		if(n % i == 0) return 0;
	return 1;
}
///////////////////////////////////////////////////////////
int main()
{
	FILE *fp = fopen("primenumber_testcases.txt","wt");
	
	for(int i=0; i < TESTCASES; i++)
	{
		int n = rand() % MAXVALUE;
		fprintf(fp, "case = Test %d\n", i+1);
		fprintf(fp, "input = %d\n", n);
		if(isPrimeNumber(n))
			fprintf(fp, "output = true\n");
		else 
			fprintf(fp, "output = false\n");
	}
	fclose(fp);
}
