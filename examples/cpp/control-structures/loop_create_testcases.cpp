#include<stdio.h>
#include<stdlib.h>

float sum(int n)
{
	int i, t=0;
	float s=0;
	
	if(n >= 1)
		for(i = 1; i <= n; i++)
		{
			t += i;
			s += 1.0/t;
		}
	return s;
}

int main()
{
	int i, n, test_cases = 50;
	FILE* fp = fopen("testcases.txt", "wt");
	
	for(i = 0; i < test_cases; i++)
	{
		int dau = (rand() % 2 == 0)? -1 : 1;
		n = dau * (rand() % 50);
		fprintf(fp, "Case = Test %d\n", i+1);
		fprintf(fp, "Grade reduction = 100%%\n");
		fprintf(fp, "Fail message = Incorrect output\n");
		fprintf(fp, "Input = %d\n", n);
		if(n >= 1) fprintf(fp, "Output = %.2f\n\n", sum(n));
		else fprintf(fp, "Output = Error\n\n");
	}
	fclose(fp);
}
