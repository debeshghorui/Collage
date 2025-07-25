#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a, n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
        
    free(a);
    return 0;
}