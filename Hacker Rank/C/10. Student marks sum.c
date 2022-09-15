
/*You are given an array of integers, marks, denoting the marks scored by students in a class.
The alternating elements marks0, marks2, marks4, and so on denote the marks of boys.
Similarly, marks1, marks3, marks5, and so on denote the marks of girls.
The array name marks, works as a pointer which stores the base address of that array. In other words, marks contains the address where marks0 is stored in the memory.
For example, let marks = [3,2,5] and marks stores 0x7fff9575c05f. Then, 0x7fff9575c05f is the memory address of marks0.
Complete the function, marks_summation(int* marks, char gender, int number_of_students) which returns the total sum of:
marks of boys if gender = b
marks of girl if gender = g
The locked code stub reads the elements of marks along with gender. Then, it calls the function marks_summation(marks, gender, number_of_students) to get the sum of alternate elements as explained above and then prints the sum.
Input Format
>>The first line contains number_of_students, denoting the number of students in the class, hence the number of elements in marks.
>>Each of the number_of_students subsequent lines contains marksi.
>>The next line contains gender.
Constraints
 #number_of_students <=10^3
 #1<=marksi<=10^3 (where 0<= i< number_of_students)
 #gender = g or b


 Output Format
  The output should contain the sum of all the aternate elements in marks as explained above.*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* p, int number_of_students, char gender) {
  //Write your code here.

  int s = 0, i = 0;
    if (gender == 'g') {
        i++;
    }
    for (; i < number_of_students; i = i+2) {
        s += p[i];
    }
    return s;



}

int main() {
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));

    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);

    return 0;
}
