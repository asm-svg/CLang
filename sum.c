#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] == 0) {
            printf("Sum = 0");
            return 0;
        }

        sum += arr[i];
    }

    printf("Sum = %d", sum);

    return 0;
}