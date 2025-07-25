/*
Input n random numbers between 0 and 1 (using the rand() function) and find their sum and average.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    float sum = 0.0, average;

    srand(time(0));

    for (int i = 0; i < 100; i++)
    {
        // Generating random numbers between 0 and 1
        float num = (float)rand()/RAND_MAX;
        printf("Random number %d: %.2f\n", i + 1, num);
        sum += num; // Adding to the sum of all random numbers

    }
    // Displaying the sum of random numbers
    printf("Sum of random numbers: %.2f\n", sum);

    // Calculating average
    average = sum / 100;

    // Displaying results
    printf("Sum of random numbers: %.2f\n", average);
    return 0;
}
