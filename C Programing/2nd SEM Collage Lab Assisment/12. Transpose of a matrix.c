#include <stdio.h>
int main()
{
    int a[10][10], m, n, i, j;

    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &m, &n);

    printf("Enter the elements:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
            
    printf("Transpose:\n");
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < m; i++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
