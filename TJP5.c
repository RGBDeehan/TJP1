// P-5. Write a program to input principal, rate and time and calculate Simple Interest. SimpleInterest=PrincipalRateTime/100 //

#include <stdio.h>
int main() {
float principal, rate, time,simpleinterest;
printf("Enter the principal amount: ");
scanf("%f", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
printf("Enter the time(years): ");
scanf("%f", &time);

simpleinterest = (principal * rate * time) / 100;

printf("The Simple Interest is: %.2f", simpleinterest);







return 0;
}
