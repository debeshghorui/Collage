/*
A
AB
ABC
ABCD
*/
#include <stdio.h>

int main()
{
    int Rows;

    printf("Enter the number of rows: ");
    scanf("%d", &Rows);

    for (int i = 1; i <= Rows; i++)
    {
        char ch = 'A'; // Reset ch to 'A' for every row
        // Print letters in increasing order
        for (int j = 1; j <= i; j++)
        {
            printf("%c", ch++);
        }

        printf("\n");
    }

    return 0;
}
