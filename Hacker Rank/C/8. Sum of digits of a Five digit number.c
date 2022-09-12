/*Task
Given a five digit integer, print the sum of its digits.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,x,y,count=0;
    scanf("%d", &n);
 if(n>=10000 && n<=99999) {
    for(int i=0;i<5;i++){
        x= n%10;
        y= n/10;
        n=y;
        count = count + x;
        }
 printf("%d",count); }
 else{printf("Invalid Number");}
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}
