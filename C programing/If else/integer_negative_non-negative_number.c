#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num >= 0) {
        printf("%d is a non-negative number.\n", num);
    }
    else {
        printf("%d is a negative number.\n", num);
    }

    return 0;
}