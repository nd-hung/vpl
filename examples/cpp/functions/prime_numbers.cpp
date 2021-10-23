#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TESTCASES 50

int isPrimeNumber(int n)
{
	if(n < 2) return 0;
	for(int i=2; i <= int(sqrt(n)); i++)
		if(n % i == 0) return 0;
	return 1;
}

int main()
{	
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);
	if(isPrimeNumber(n))
		printf("true", n);
	else
		printf("false", n);		
}
