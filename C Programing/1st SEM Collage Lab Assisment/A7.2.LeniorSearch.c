#include <stdio.h>

int main()
{
    int n, target, found = 0;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input the target element to search
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Linear search logic
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            printf("Element found at index %d\n", i);
            found = 1; // Mark as found
            break;     // Exit loop once element is found
        }
    }

    // If the element is not found
    if (!found)
    {
        printf("Element not found in the array\n");
    }

    return 0;
}
