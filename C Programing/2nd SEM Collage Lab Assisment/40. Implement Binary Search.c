#include <stdio.h>
int main()
{
    int a[10], n, k, l = 0, h, m;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the element to search for: ");
    scanf("%d", &k);
    
    h = n - 1;
    while (l <= h)
    {
        m = (l + h) / 2;
        if (a[m] == k)
        {
            printf("Found at %d\n", m);
            return 0;
        }
        if (a[m] < k)
            l = m + 1;
        else
            h = m - 1;
    }
    printf("Not found\n");

    return 0;
}