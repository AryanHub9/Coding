#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    bool isPrime = true;

    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        printf("Prime\n");
    else
        printf("Not prime\n");

    return 0;
}