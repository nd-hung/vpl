#include<stdio.h>
#include<stdlib.h>

#define MAXVALUE  100	// Max random value
#define MAXSIZE    50	// Max size of arrays
#define TESTCASES 100	// Number of test cases

void create_array(int a[], int n)
{
	for(int i=0; i < n; i++)
		a[i] = rand() % MAXVALUE; 
}

void sort_array(int a[], int n)
{
	// Sort ascending
	for(int i=0; i < n-1; i++)
		for(int j=i+1; j < n; j++)
			if(a[i] > a[j])
			{
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
}

fprint_array(FILE *fp, int a[], int n)
{
	for(int i=0; i < n; i++) fprintf(fp, "%d ", a[i]);
}

///////////////////////////////////////////////////////////
int main()
{
	int a[MAXSIZE];
	FILE *fp = fopen("array_testcases.txt","wt");
	
	for(int i=0; i < TESTCASES; i++)
	{
		int n = rand() % MAXSIZE;
		fprintf(fp, "case = Test %d\n", i+1);
		fprintf(fp, "input = %d\n", n);
		create_array(a, n);
		fprint_array(fp, a, n);
		sort_array(a,n);
		fprintf(fp, "\noutput = ");
		for(int j=0; j < n; j++) fprintf(fp, "%d ", j);
		fprintf(fp, "\n");
		fprint_array(fp, a,n);
		fprintf(fp, "\n");
	}
	fclose(fp);
}
