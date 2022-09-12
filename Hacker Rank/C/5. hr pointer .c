#include <stdio.h>
#include <stdlib.h>


void update(int *p,int *q) {
    // Complete this function
    int x;
    x = *p;
    *p = (x) + (*q);
    *q = abs((x)-(*q));


}

int main() {
    int a, b;


    scanf("%d\n%d",&a,&b);
    update(&a, &b);
    printf("%d\n%d", a, b);

    return 0;
}
