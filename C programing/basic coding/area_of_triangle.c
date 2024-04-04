#include<stdio.h>
int main()
{
    int base,height,area;
    printf("enter base:");
    scanf("%d",&base);
    printf("enter height:");
    scanf("%d",&height);
    area=(base*height)/2;
    printf("the area of triangle is:-%d",area);
    return 0;
}