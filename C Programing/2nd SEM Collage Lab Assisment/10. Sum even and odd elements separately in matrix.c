#include <stdio.h>
int main()
{
    int a[10][10], m, n, i, j, se = 0, so = 0;
    int Even[100], Odd[100];

    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &m, &n);

    printf("Enter the elements:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            (a[i][j] % 2 == 0) ? (Even[se++] = a[i][j]) : (Odd[so++] = a[i][j]);
        }
    printf("Even=%d Odd=%d\n", se, so);

    return 0;
}
