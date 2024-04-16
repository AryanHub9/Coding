#include<stdio.h>
int main()
{
    char ch;
    printf("enter character:-");
    scanf("%c",&ch);
    if(ch>='A'&& ch<='Z')
    {
        printf("character is uppercase",ch);
    }
     else if(ch>='a'&& ch<='z')
    {
        printf("character is lowercase",ch);
    }
    else
    {
        printf("not a character",ch);
    }
    return 0;
}