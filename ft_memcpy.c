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

void	*ft_memcpy(void *to, const void *from, size_t numBytes)
{
	unsigned char		*dest;
	const unsigned char	*src;

	dest = to;
	src = from;
	while (numBytes--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (to);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "Geeks";
	char	str2[] = "Quiz";

	puts("str1 before memcpy ");
	puts(str1);
	// Copies contents of str2 to str1
	ft_memcpy(str1, str2, sizeof(str2));
	puts("\nstr1 after memcpy ");
	puts(str1);
	return (0);
}
*/
