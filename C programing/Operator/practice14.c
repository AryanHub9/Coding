#include<stdio.h>
int main()
{
    int x,i=4,j=7;
    x=j||i++&&1;
    printf("%d",i);
}