/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <ybenzidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 01:45:18 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/19 01:46:00 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				index;
	unsigned char		*ptrdest;
	const unsigned char	*ptrsrc;

	ptrdest = (unsigned char *)dst;
	ptrsrc = (const unsigned char *)src;
	if (!dst || !src)
		return (NULL);
	if (dst == src || len == 0)
		return (dst);
	index = len;
	if (ptrsrc < ptrdest)
	{
		while (index--)
			ptrdest[index] = ptrsrc[index];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
// it handells overlapp and preents over writing data that no been copied yet 
// overlap ; when rwo or more ariable share the same memory location
// memoryover lap can cause data corruption , umperdictable behaviour 
// dest < src alors coopy from the begenning and moes forward 
// the asci alue are presented in the memory in binary
/*#include <stdio.h>
int	main(void)
{
	char str[]="123456";
	char *dst =str+2;
	printf("%s\n", str);
	printf("%s\n",dst);
	dst = ft_memmove(dst,str, 3);
	printf("%s\n", str);
	printf("%s",dst);
}*/
