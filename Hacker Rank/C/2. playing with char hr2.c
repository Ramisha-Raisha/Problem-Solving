#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char c;
    scanf("%c",&c);
    printf("%c\n",c);
    char l[80];
    scanf("%s",l);
    printf("%s\n",l);
    char t[80];
    scanf("\n");
    fgets(t,80,stdin);
    printf("%s",t);
    return 0;
}
