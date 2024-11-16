/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcrhr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: ybenzidi <marvin@42.fr>                    +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/11/02 20:06:16 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/02 20:06:17 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int        i;
    char    ch;

    ch = (char)c;
    i = ft_strlen(s);
    while (i >= 0)
    {
        if (s[i] == ch)
            return ((char *)s + i);
        i--;
    }
    if (ch == '\0')
        return ((char *)s + ft_strlen(s));
    return (NULL);
}
// #include<stdio.h>
// int	main(void)      
// {
// 	//const char *tst="yasser benzidiya";
// 	//char c = '\0';
// 	printf("%s",ft_strrchr( "yasser benzidiya", 'e'));
// }
