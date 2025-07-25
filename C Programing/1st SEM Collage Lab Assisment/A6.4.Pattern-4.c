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
        // Print leading spaces
        for (int j = 1; j <= Rows - i; j++)
        {
            printf(" ");
        }

        // Print numbers in increasing order
        for (int k = 1; k <= i; k++)
        {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}