#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("%d is a positive number.\n", num);
    }
    else if (num < 0) {
        printf("%d is a negative number.\n", num);
    }
    else {
        printf("You entered zero.\n");
    }
    return 0;
}