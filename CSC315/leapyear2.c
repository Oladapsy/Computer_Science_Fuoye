#include <stdio.h>

void checkLeapYear(void){
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
}


int main(void){
    char choice;

    do {
        checkLeapYear();
        printf("Do you want to check another year? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    printf("Program Excited.\n");
    return (0);
}