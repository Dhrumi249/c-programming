#include <stdio.h>

void reverse(char str[]) {
    int i, len = 0;
    while(str[len] != '\0') {
        len++;
    }

    printf("Reversed string: ");
    for(i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    reverse(str);
    return 0;
}
