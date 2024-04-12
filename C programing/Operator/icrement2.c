#include<stdio.h>
int main()
{
    int i=0,j=1,k=2,m;
     m=i++||j++||k++;
    printf("i=%d j=%d k=%d m=%d",i,j,k,m);
    return 0;
}