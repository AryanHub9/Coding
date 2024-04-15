#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    if(!i==~i)printf("same this time\n");
    return 0;
}