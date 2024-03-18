#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    printf("Enter the value of Age");
    scanf("%d",&age);
    if (age>=18)
    {
        printf("yes,he/she eligible for vote");
    }
    else
    {
        printf("no,he/she not eligible for vote");
    }
    getch();
}