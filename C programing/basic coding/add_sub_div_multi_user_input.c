#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c;
    printf("plz enter any two numbers:\n");
    scanf("%f%f",&a,&b);
    c=a+b;
    printf("the addition of two number is:%f\n",c);
    c=a-b;
    printf("the substraction of two number is:%f\n",c);
    c=a*b;
    printf("the multiplication of two numbers is:%f\n",c);
    c=a/b;
    printf("the division of two numbers is:%f\n",c);
    getch();
}