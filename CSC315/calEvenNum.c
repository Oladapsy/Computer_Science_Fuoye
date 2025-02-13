#include <stdio.h>

int main(void)
{
    int sum = 0, count = 0;
    long long squareSum = 0;
    float average;

    /* calculate sum and square sum */
    for (int i = 2; i <= 1000; i += 2)
    {
        sum += i; /* adds even numbers to sum */
        squareSum += (i * i); /* adds square of even numbers */
        count++; /* count the even numbers */
    }

    /* calculate the average */
    average = (float)sum / count;

    /* Display result */
    printf("Average of even numbers from 1 to 1000 is: %.2f\n", average);
    printf("Sum of squares of even numbers from 1 to 1000 is: %lld\n", squareSum);

    return (0);
}