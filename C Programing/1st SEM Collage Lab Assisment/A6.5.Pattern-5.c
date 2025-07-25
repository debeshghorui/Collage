/*
1
12
123
1234
*/
#include <stdio.h>

int main()
{
    int Rows;

    printf("Enter the number of rows: ");
    scanf("%d", &Rows);

    for (int i = 1; i <= Rows; i++)
    {
        // Print numbers in increasing order
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}