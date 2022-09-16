/*This challenge will let you learn about bitwise operators in C.
Inside the CPU, mathematical operations like addition, subtraction, multiplication and division are done in bit-level. To perform bit-level operations in C programming, bitwise
operators are used which are explained below.
Bitwise AND operator & The output of bitwise AND is 1 if the corresponding bits of two operands is 1. If either bit of an operand is 0, the result of corresponding bit is
evaluated to 0. It is denoted by &. Bitwise OR operator | The output of
bitwise OR is 1 if at least one corresponding bit of two operands is 1. It is denoted by |.
Bitwise XOR (exclusive OR) operator ^ The result of bitwise XOR operator is 1 if the corresponding bits of two operands are opposite. It is denoted by XOR.
###Task
Given set, s= {1,2,3,4......n} find:
the maximum value of a&b which is less than a given integer k , where a and b (where a < b) are two integers from set S.
the maximum value of a|b which is less than a given integer k, where a and b (where a < b) are two integers from set S.
the maximum value of a XOR b which is less than a given integer k, where a and b (where a < b) are two integers from set S.
Input Format
The only line contains 2 space-separated integers n, and k, respectively.
Constraints:
 2<=n<=10^3
 2<=k<=n*/



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int i,j,max_and=0,max_or=0,max_xor=0;
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            int x=i&j,y=i|j,z=i^j;
            if(x<k & x>max_and)
                 max_and=x;
            if(y<k & y>max_or)
                 max_or = y;
            if(z<k & z>max_xor)
                 max_xor = z;

        }
    }
    printf("%d\n%d\n%d",max_and,max_or,max_xor);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
