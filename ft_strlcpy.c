#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i =  0;
    int src_lent = 0;
    while(src[src_lent])
        src_lent++;
    if(dstsize==0)
        return src_lent;
    while (i < dstsize-1 && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i]='\0';
    return(src_lent);
}
