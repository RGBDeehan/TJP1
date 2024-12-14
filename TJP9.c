// P-9. Write a C program which can input running time of a movie by inputting two numbers mentioning hour and minute of that movie. Display what is the running time of that movie in minutes. Display running time in fractional hour format. As example, if input is 1 hour 15 minutes, then one output is 75 minutes and another output is 1.25 hours. //

#include <stdio.h>
int main(){
int hours, minutes, totalMinutes;
float fractionalHours;
    printf("Enter running time of the movie: ");
    printf("Hours: ");
    scanf("%d", &hours);
    printf("Minutes: ");
    scanf("%d", &minutes);

    totalMinutes = (hours * 60) + minutes;
    fractionalHours = hours + (minutes / 60.0);

    printf("The running time of the movie is:\n");
    printf("%d minutes\n", totalMinutes);
    printf("%.2f hours\n", fractionalHours);

return 0;
}

