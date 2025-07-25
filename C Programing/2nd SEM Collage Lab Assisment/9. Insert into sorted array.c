#include <stdio.h>
int main()
{
    int a[100], n, x, i, j;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the element to insert: ");
    scanf("%d", &x);

    for (i = 0; i < n && a[i] < x; i++);
    for (j = n; j > i; j--)
        a[j] = a[j - 1];
    a[i] = x;
    n++;
    
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
