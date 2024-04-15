#include<stdio.h>
int main()
{
    int a,b,c,d;
    a=3;
    b=5;
    c=a,b;
    printf("c=%d d=%d",c,b);
    return 0;
}
