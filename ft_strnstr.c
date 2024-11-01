#include"libft.h"
char 	*ft_strnstr (char *s1, char *s2, size_t n)
{
    size_t i = 0;
    int l = ft_strlen(s2);
    while(i<n && s1[i])
    {
        if(s1[i]==s2[0] && (i+l)<n)
        {
            if(ft_strncmp(&s1[i],s2,l)==0)
                return(&s1[i]);
        }
        i++;
    }
    return 0;
}
/*#include<stdio.h>
int main()
{
    char *s1="yasser benzidiya kay jrb lcode";
    char *s2="kay";
    size_t n = 11;
    char *res = ft_strnstr(s1,s2,n);
    printf("%s",res);
}*/