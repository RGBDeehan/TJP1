// P-6. Write a program to convert temperature from Celsius to Fahrenheit. F=(C*1.8)+32 //

#include <stdio.h>
int main() {
float celsius, fahrenheit;
    printf("Enter Temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32 ;

    printf("Temperature in Fahrenheit: %.2f °F\n", fahrenheit);

return 0;
}
