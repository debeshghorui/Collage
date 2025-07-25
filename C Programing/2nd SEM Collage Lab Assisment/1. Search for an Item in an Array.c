/* Input an array of size n and search for an item from it.
The item should be taken as input from the user and if found,
the position at which it has been found in the array should be displayed; else, display Sorry, item not found */

#include <stdio.h>
int main()
{
    int a[100], n, i, x, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the element to search for: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++)
        if (a[i] == x)
        {
            printf("Found at %d\n", i + 1);
            found = 1;
        }
    if (!found)
        printf("Not found\n");

    return 0;
}