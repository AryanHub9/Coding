#include<stdio.h>
int main()
{
    int a=2,b=3,c=4,d=5,e;
    e=++a&&++b||--c&&++d;
    printf("a=%d b=%d c=%d d=%d e=%d",a,b,c,d,e);
    return 0;
}