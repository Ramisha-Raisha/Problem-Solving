/*There is a series,S, where the next term is the sum of pervious three terms. Given the first three terms of the series,a,b and c respectively, you have to output the nth term of
the series using recursion.
Consider the following steps:
1. S(1) = 1
2. S(2) = 2
3. S(3) = 3
4. S(4) = S(3)+S(2)+S(1)
5. S(5) = S(4)+S(3)+S(2)*/

Recursive method for calculating nth term is given below.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.

    if(n == 1)
        return a;
    else if (n == 2)
        return b;
    else if (n == 3)
        return c;

    return find_nth_term(n-1,a,b,c)+find_nth_term(n-2,a,b,c)+
    find_nth_term(n-3,a,b,c);
}

int main()
{
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}
