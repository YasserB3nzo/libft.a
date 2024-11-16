/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <ybenzidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:58:55 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/16 18:09:26 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	i = 0;
	if (dest == src || n == 0)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d > s && d < s + n)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
#include "libft.h"
#include <stdio.h>
#include <string.h>


int	main(void)
{
	char str1[] = "Hello, World!";
	char str2[] = "Testing memmove with overlap.";
	char str3[] = "Testing memmove with overlap.";

	printf("Original str1: %s\n", str1);

	// Basic memmove example: non-overlapping regions
	ft_memmove(str1 + 7, str1, 5);
	printf("After ft_memmove (non-overlapping): %s\n", str1);

	// Overlapping case: copying forward within the same string
	printf("Original str2 (for overlap test): %s\n", str2);
	ft_memmove(str2 + 8, str2, 10);
	printf("After ft_memmove (overlapping forward): %s\n", str2);

	// Overlapping case: copying backward within the same string
	printf("Original str3 (for overlap test): %s\n", str3);
	ft_memmove(str3, str3 + 8, 10);
	printf("After ft_memmove (overlapping backward): %s\n", str3);

	return (0);
}
*/
