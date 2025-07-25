#include <stdio.h>
int main()
{
    int a[50], b[50], c[100], n1, n2, i = 0, j = 0, k = 0;

    printf("Enter the total number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter %d numbers\n", n1);
    for (int x = 0; x < n1; x++)
        scanf("%d", &a[x]);

    printf("Enter the total number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter %d numbers\n", n2);
    for (int x = 0; x < n2; x++)
        scanf("%d", &b[x]);

    while (i < n1 && j < n2)
        c[k++] = (a[i] < b[j]) ? a[i++] : b[j++];
    while (i < n1)
        c[k++] = a[i++];
    while (j < n2)
        c[k++] = b[j++];

    printf("Merged array:\n");
    for (i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}