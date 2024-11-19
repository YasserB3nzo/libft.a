/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <ybenzidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:58:49 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/17 21:28:36 by ybenzidi         ###   ########.fr       */
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

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {	
// 	char *s="yasser";
// 	puts("str1 before memcpy ");
// 	puts(s);

// 	s=memcpy(s,"",4);
// 	puts("\nstr1 after memcpy ");
// 	puts(s);
// 	// s = ft_memcpy(s, "",4);
// 	// puts("\nstr1 after ftmemcpy ");
// 	// puts(s);

// 	return (0);
// }
