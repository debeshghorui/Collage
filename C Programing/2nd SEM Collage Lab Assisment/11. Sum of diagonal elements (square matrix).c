#include <stdio.h>
int main()
{
    int a[10][10], n, i, sum = 0;

    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            if (i == j || i + j == n - 1)
                sum += a[i][j];
        }
    printf("Sum=%d\n", sum);
    return 0;
}