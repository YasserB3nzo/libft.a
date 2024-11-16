/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: ybenzidi <marvin@42.fr>                    +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/11/02 20:08:44 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/02 20:08:45 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i = 0;
	int src_lent = 0;
	while (src[src_lent])
		src_lent++;
	if (dstsize == 0)
		return (src_lent);
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_lent);
}
