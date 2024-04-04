#include<stdio.h>
int main()
{
    int a,b,c,avg;
    printf("enter the  1st number: ");
    scanf("%d",&a);
    printf("enter the 2nd number: ");
    scanf("%d",&b);
    printf("enter the 3rd number :");
    scanf("%d",&c);
    avg=(a+b+c)/3;
    printf("the avg is:-%d",avg);
    return 0;
}