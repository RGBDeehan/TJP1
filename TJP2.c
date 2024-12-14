// P-2. Write a program to input length and breadth of a rectangle and calculate its area. Area=Length*Breadth. //

#include <stdio.h>
int main() {
float length, breadth, area;

printf("Enter the length of the rectange: ");
scanf("%f", &length);

printf("Enter the breadth of the rectangle: ");
scanf("%f", &breadth);

area = length * breadth ;
printf("The area of the rectangle is: %.2f\n", area);

return 0;
}
