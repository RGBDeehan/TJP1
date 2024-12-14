// P-10. Write a C program which can input 4 integer numbers from the users and display the ratio between differences of first two numbers and last two numbers. As example, if input values are A, B, C, and D then find (A-B)/(C-D). //

#include <stdio.h>
int main(){
int A, B, C, D;
float ratio;

printf("Enter four integers: \n");
printf("A: ");
scanf("%d", &A);
printf("B: ");
scanf("%d", &B);
printf("C: ");
scanf("%d", &C);
printf("D: ");
scanf("%d", &D);

if (C - D == 0) {
    printf("Error: Division by zero is not allowed (C - D is zero)");
}
else {
    ratio = (A - B) / (C - D);
    printf("The ratio (A - B) / (C - D) is %.2f\n", ratio );

}

return 0;

}
