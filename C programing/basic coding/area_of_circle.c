#include<stdio.h>
#include<conio.h>
void main()
{
   float r,area,pi;
   pi=3.14152;
   printf("Enter radius");
   scanf("%f",&r);
   area=pi*r*r;
   printf("The area of circle is:%f",area);
   getch();
}