/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 20:05:52 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/02 20:05:53 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char    *ft_strchr(const char *str, int c)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return ((char *)&str[i]);
        i++;
    }
    // Check for the null terminator
    if (c == '\0')
        return ((char *)&str[i]);
    return (NULL);
}

/*#include<stdio.h>
int main()
{
    const char *tst="yasser benzidiya";
    char c = 'e';
    printf("%s",ft_strchr(tst,c));
}*/
