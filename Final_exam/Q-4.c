#include <stdio.h>

int main() {
    int arr[100], *ptr, n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;
    printf("Squares of elements:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", (*(ptr + i)) * (*(ptr + i)));
    }
    printf("\n");

    return 0;
}
