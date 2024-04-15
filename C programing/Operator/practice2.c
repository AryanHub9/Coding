#include<stdio.h>
int main()
{
    int a=1,b=3,c=1;
    if ((a||c--)&&(c&&b--))
    {
        printf("%d\n",b);
    }
    printf("%d%d%d",a,b,c);
}