#include<stdio.h>
#include<stdlib.h>
#define MAX 100

void create_array(int a[], int n)
{
	for(int i=0; i < n; i++)	
		a[i] = (int)rand() % 50;
}

void print_array(int a[], int n)
{
	for(int i=0; i < n; i++)
		printf("%d  ", a[i]);
}

int max(int a[], int n)
{
	int max = 0;
	for(int i=0; i < n; i++)
		if(max < a[i]) max = a[i];
	return max;
}

int main()
{
	int a[MAX], n=20;
	FILE *fp = fopen("max_of_array_testcases.txt", "wt");
	for(int i=1; i <= 50; i++)
	{
		create_array(a,n);
		fprintf(fp, "case = Test case %d\n", i);
		fprintf(fp, "input = ");
		fprintf(fp, "%d\n", n);
		for(int i=0; i < n; i++)
			fprintf(fp, "%d\n", a[i]);
		fprintf(fp, "output = %d\n", max(a,n));
	}
}
