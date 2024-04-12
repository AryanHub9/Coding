#include<stdio.h>
int main()
{
    int n=5;
    int x;
    x=n++;
    printf("x=%d\n",x);
    printf("n=%d",n);
    return 0;
}