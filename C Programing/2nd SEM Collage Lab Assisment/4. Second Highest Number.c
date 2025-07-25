#include <stdio.h>
int main()
{
    int a[100], n, first = -1e9, second = -1e9;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > first)
        {
            second = first;
            first = a[i];
        }
        else if (a[i] > second && a[i] != first)
            second = a[i];
    }
    if (second == -1e9)
        printf("No second highest\n");
    else
        printf("Second highest = %d\n", second);

    return 0;
}