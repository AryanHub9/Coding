#include<stdio.h>
int main()
{
    int i=0,j=2,k=3,l=2,m;
    m=(i++&&j++&&k++)||l++;
    printf("i=%d j=%d k=%d l=%d m=%d",i,j,k,l,m);
    return 0;
}