#include<stdio.h>

int main()
{
    int arr[100], n, pos, i;

    // Input array size and elements
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input position
    printf("Enter position to delete: ");
    scanf("%d", &pos);

    // Validate position
    if(pos < 1 || pos > n)
    {
        printf("Invalid position! Enter between 1 to %d\n", n);
        return 0;
    }

    // Shift elements to the left
    for(i = pos-1; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }

    n--;

    // Print result
    printf("Array after deletion: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}