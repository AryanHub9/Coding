#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the coordinate:");
    scanf("%d%d",&x,&y);
    if(y=0)
    {
        printf("lies on x-axis\n");
    }
    else if(x==0)
    {
        printf("lies on y-axis\n");
    }
    if(x==0 && y==0)
    {
        printf("the point is origin\n");
    }
    else if(x==0)
    {
        printf("lies on y-axis\n");
    }
    else if(y==0)
    {
        printf("lies on x-axis\n");
    }
    else
    {
        printf("the point does not lie on x or y axis\n");
    }
    return 0;
}