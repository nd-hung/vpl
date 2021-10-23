#include<stdio.h>

#define MAX 100

int main()
{
	int n, a[MAX];
	
	// Input number of elements
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	// Input values of elements
	for(int i=0; i < n; i++)		
	{
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
	// Sort ascending
	for(int i=0; i < n-1; i++)
		for(int j=i+1; j < n; j++)
			if(a[i] > a[j])
			{
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
	// Print sorted array
	for(int i=0; i < n; i++) printf("%d ", a[i]);
}
