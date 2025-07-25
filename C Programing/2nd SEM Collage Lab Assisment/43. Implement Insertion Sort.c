#include <stdio.h>
int main()
{
    int a[10], n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 1; i < n; i++)
    {
        int k = a[i], j = i - 1;
        while (j >= 0 && a[j] > k)
            a[j + 1] = a[j--];
        a[j + 1] = k;
    }
    
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}