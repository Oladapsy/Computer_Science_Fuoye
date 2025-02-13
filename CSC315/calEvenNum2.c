#include <stdio.h>

void calculateEvenNumbers()
{
    int sum = 0, count = 0;
    double average;
    long long squareSum = 0;

    printf("Square of even numbers between 1 and 1000:\n");

    for (int i = 2; i <= 1000; i += 2)
    {
        printf("%d^2 = %d\n", i, i * i);
        sum += i;
        squareSum += i * i;
        count++;
    }

    average = (double)sum / count;
    printf("\nAverage of even Numbers: %.2f\n", average);
    printf("Sum of squares of even numbers from 1 to 1000 is: %lld\n", squareSum);

}

int main(void)
{
    char choice;

    do {
        calculateEvenNumbers();
        printf("Do you want to calculate again?: (y/n)");
        scanf("%c", &choice);
    } while (choice == 'y' || choice == 'Y');

    printf("Program exited.\n");
    return (0);
}