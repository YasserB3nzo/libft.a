#include "libft.h"
char    *ft_strchr(const char *str,int c)
{
    int i = 0;
    while(str[i])
    {
        if(str[i]==c)
            return &str[i];
        i++;
    }
    return (NULL);
}
/*#include<stdio.h>
int main()
{
    const char *tst="yasser benzidiya";
    char c = 'e';
    printf("%s",ft_strchr(tst,c));
}*/