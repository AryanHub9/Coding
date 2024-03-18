#include<stdio.h>
int main()
{
    float r;
    printf("enter the value:");
    scanf("%f",&r);
    float v=4*3.1415*r*r*r/3;
    printf("The volume is:%f",v);
    return 0;
}