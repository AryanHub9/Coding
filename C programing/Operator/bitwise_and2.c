#include<stdio.h>
int main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    int test=1;
    if(n&test)
    {
        printf("number is odd\n");
    }
    else
    {
        printf("number is even\n");
    }
    return 0;
}