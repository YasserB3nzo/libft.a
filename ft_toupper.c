#include"libft.h"
int ft_toupper(int c)
{
    if(c>='a' && c<='z')
        c-=32;
    return c;
}
/*#include <stdio.h>
int main()
{
    printf("%c",toupper('9'));
}*/