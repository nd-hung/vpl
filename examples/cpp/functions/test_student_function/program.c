// put this file in execution files
#include"func.h"
#include<stdio.h>

int main()
{
    int a, b;
    
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);

    int s = sum(a,b);
    printf("Sum = %d", s );
}
