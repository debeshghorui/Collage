#include <stdio.h>
int main()
{
    int a[100], e[100], o[100], n, i, ei = 0, oi = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        (a[i] % 2 == 0) ? (e[ei++] = a[i]) : (o[oi++] = a[i]);
    }
    printf("Even: ");
    for (i = 0; i < ei; i++)
        printf("%d ", e[i]);
        
    printf("\nOdd: ");
    for (i = 0; i < oi; i++)
        printf("%d ", o[i]);

    return 0;
}
