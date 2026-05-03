#include<stdio.h>

int main()
{
    int arr[100], n, pos, val, i;

    // Input array size and elements
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input position and value
    printf("Enter position: ");
    scanf("%d", &pos);

    if(pos < 1 || pos > n)
    {
        printf("Invalid position! Enter between 1 to %d\n", n);
        return 0;
    }

    printf("Enter value: ");
    scanf("%d", &val);

    // Shift elements to the right
    for(i = n; i >= pos; i--)
    {
        arr[i] = arr[i-1];
    }

    // Insert value
    arr[pos-1] = val;
    n++;  // Increase array size

    // Print result
    printf("Array after insertion: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}