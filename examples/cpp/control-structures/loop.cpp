#include<stdio.h>

int main()
{
	int n, i, t=0;
	float s=0;
	printf("n = ");
	scanf("%d", &n);
	if(n >= 1)
	{
		for(i = 1; i <= n; i++)
		{
			t += i;
			s += 1.0/t;
		}
		printf("S = %.2f", s);
	}
	else
		printf("Error");
}
