#include <stdio.h>

int main() {
    int length,width,rectangle;
    printf("enter value of length:");
    scanf("%d",&length);
    printf("enter value of width:");
    scanf("%d",&width);
    rectangle= 2*(length+width);
    printf("parameter of rectangle is:-%d",rectangle);
    return 0;
}