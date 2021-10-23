#include<stdio.h>
#define MAX 100

int main()
{
	int n, a[MAX], max,i;
	
	printf("Nhap n: ");
	scanf("%d", &n);
	for(i=0; i <n; i++)
	{
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
	
	max = a[0];
	for(i=1; i < n; i++)
		if(max < a[i]) max = a[i];
		
	printf("Max = %d", max);
	
}
