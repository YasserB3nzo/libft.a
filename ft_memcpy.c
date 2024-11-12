/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <ybenzidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:38:35 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/10/31 23:16:54 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	while (i < n && d != s)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	//char str1[] = "Geeks";
    //char str2[] = "Quiz";
    char *s=NULL;
    puts("str1 before memcpy ");
    puts(s);

    // Copies contents of str2 to str1
    s=ft_memcpy(" ", "yasser",5);

    puts("\nstr1 after memcpy ");
    puts(s);

    return 0;
}
*/