#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int a, b, i;
    scanf("%d\n%d", &a, &b);
      // Complete the code.
if (a>=1 && b<=1000000){
  if (a>=1 || b<=9){
    for(int i=a;i<=9 && i<=b;i++){

         switch (i){
             case 1: printf("one\n");
             break;

             case 2: printf("two\n");
             break;

             case 3: printf("three\n");
             break;

             case 4: printf("four\n");
             break;

             case 5: printf("five\n");
             break;

             case 6: printf("six\n");
             break;

             case 7: printf("seven\n");
             break;

             case 8: printf("eight\n");
             break;

             case 9: printf("nine\n");
             break;
             default:
               printf("Invalid number!\n");

         }
  }  }

 if(b>=10){
      for(int i=10; i<=b;i++)
          {
          if(i>9 && i%2==0){printf("even\n");}
         else if(i>9 && i%2 !=0){printf("odd\n");}  }} }
else{printf("Invalid Number!");}
      return 0;

}
