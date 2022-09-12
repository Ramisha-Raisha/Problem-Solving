#include <stdio.h>
 int max_of_four(int a, int b, int c, int d){
     int max;
     if(a>b){
         if(a>c && a>d){max=a;}
         else if(c>a && c>d){max=c;}
         else if(d>a && d>c){max=d;}
     }
     else{
         if(b>c && b>d){max=b;}
         else if(c>b && c>d){max=c;}
         else if(d>b && d>c){max=d;}
     }
     return max;
 }


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
