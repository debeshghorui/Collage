#include <stdio.h>
int main()
{
    int a[10], n, k, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the element to search for: ");
    scanf("%d", &k);

    for (i = 0; i < n; i++)
        if (a[i] == k)
            break;
    printf(i < n ? "Found at %d\n" : "Not found\n", i);

    return 0;
}