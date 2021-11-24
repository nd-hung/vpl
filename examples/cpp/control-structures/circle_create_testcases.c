/* Create test cases for circle.c program
*/
#include<stdio.h>
#include<stdlib.h>

#define TESTCASES 50

const float PI = 3.1416;

int main()
{	
	float s=0;
	int i,r;
	
	FILE *fp = fopen("circle_testcases.txt", "wt");
	
	for(i=0; i < TESTCASES; i++)
	{
		fprintf(fp, "case = Test %d\n", i+1);
		r = rand() % 50 - 10;
		fprintf(fp, "input = %d\n", r);
		if(r > 0)
		{	s = r*r*PI;
			fprintf(fp, "output = %f\n", s);
		}
		else
			fprintf(fp, "output = r <= 0\n", s);
	}
	fclose(fp);

}
