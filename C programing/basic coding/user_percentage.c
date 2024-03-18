#include<stdio.h>
int main()
{
    float Math;
    printf("Enter the total marks in Math:-");
    scanf("%f",&Math);
    float Physics;
    printf("Enter the total marks in Physics:-");
    scanf("%f",&Physics);
    float Chemistry;
    printf("Enter the total marks in Chemistry:-");
    scanf("%f",&Chemistry);
    float English;
    printf("Enter the total marks in English:-");
    scanf("%f",&English);
    float Hindi;
    printf("Enter the total marks in Hindi:-");
    scanf("%f",&Hindi);
    float p=(Math+Physics+Chemistry+English+Hindi)/5;
    printf("Percentage in five subjest is:-%f",p);
    return 0;
}