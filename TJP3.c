// P-3. Write a program to input radius and calculate area of circle and circumference of a circle. Area of circle = 3.14 .*r .*r, Circumference of circle = 2 .*3.14 .*r. //

#include <stdio.h>
#define PI 3.14159
int main() {
float radius, area, circumference;
printf("Enter the radius of the circle: ");
scanf("%f", &radius);
 area = PI * radius * radius;
circumference = 2 * PI * radius;

 printf("The area of the circle is: %.2f\n", area);
 printf("The circumference of the circle is: %.2f\n", circumference);







return 0;
}
