#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,m,n;
    float c,d,p,q;
    scanf("%d %d", &a,&b);
    m=a+b;
    n=a-b;
    printf("%d %d",m,n);
    scanf("%f %f",&c,&d);
    p=c+d;
    q=c-d;
    printf("\n%.1f %.1f",p,q);

    return 0;
}
