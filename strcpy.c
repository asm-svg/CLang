#include <stdio.h>
#include <string.h>

int main() {
    char str1[15], str2[15];
    int n;

    printf("Enter Source String: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter Destination String: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    printf("Enter number of characters to replace in destination string: ");
    scanf("%d", &n);

    strncpy(str2, str1, n);

    printf("Source string is: %s\n", str1);
    printf("Destination string is: %s\n", str2);

    return 0;
}
