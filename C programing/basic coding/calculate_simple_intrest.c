#include<stdio.h>
#include<conio.h>
void main()
{
    float p,t,r,si;
    printf("plz enter the value of p");
    scanf("%f",&p);
    printf("plz enter the value of t");
    scanf("%f",&t);
    printf("enter the value of r");
    scanf("%f",&r);
    si=p*t*r/100;
    printf("%f",si);
    getch();
}