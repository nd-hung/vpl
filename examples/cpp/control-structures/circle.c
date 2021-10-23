#include<stdio.h>

const float PI = 3.1416;

int main()
{
	float r, s=0;
	printf("Nhap ban kinh: ");
	scanf("%f", &r);
	if(r > 0)
		{
			s = r*r*PI;
			printf("%f", s);
		}
	else
		printf("r <= 0");
}
