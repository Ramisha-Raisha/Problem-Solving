#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char s[100];
    printf("Hello, World!\n");
    fgets(s,100,stdin);
    printf("%s",s);
    //scanf("%[^\n]%*c", &s);


    return 0;
}
