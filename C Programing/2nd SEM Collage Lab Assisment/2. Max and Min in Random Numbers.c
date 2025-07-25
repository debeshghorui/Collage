/*
Input an array of n random numbers within 100 
(10 be enervated using the rand() function) and find the maximum and minimum amounts 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;

    // Initialize random seed
    srand(time(0));

    // Taking input for the array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Generating random numbers and filling the array
    printf("Generated array: ");
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100; // Generates numbers between 0 and 99
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Finding max and min values
    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Displaying results
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}
