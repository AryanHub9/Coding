#include<stdio.h>
int main()
{
    int a,b=2,c;
    a=2*(b++);
    c=2*(++b);
    printf("a=%d c=%d",a,c);
    return 0;
}