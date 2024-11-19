/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <ybenzidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:41:48 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/16 17:43:58 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ldst;
	size_t	lsrc;
	size_t	i;

	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	i = 0;
	if (size <= ldst)
		return (size + lsrc);
	while (src[i] && ldst + i < size - 1)
	{
		dst[ldst + i] = src[i];
		i++;
	}
	dst[ldst + i] = '\0';
	return (ldst + lsrc);
}
// #include <stdio.h>
// int main()
// {
// 	char dest[5] = "okok";
// 	char src[] = "  exemple";
// 	printf("%zu\n",(ft_strlcat(dest,src,2)));
// 	//printf("%zu",(strlcat(dest,src,2)));
// 	//strlcat(dest,src,2);
// 	printf("%s",dest);
// }
