#include <stdio.h>
int main()
{
    int x = 10, y = 20, z = 1;
    if (x < 1 && y > 50 || z < 10)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}