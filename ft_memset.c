/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: ybenzidi <ybenzidi@student.42.fr>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/10/26 18:30:00 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/10/28 16:20:18 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t numbyte)
{
	unsigned char	c;
	unsigned char	*p1;
	size_t			i;

	c = (unsigned char)value;
	p1 = (unsigned char *)ptr;
	i = 0;
	while (i < numbyte)
	{
		p1[i] = c;
		i++;
	}
	return (ptr);
}
/*include <stdio.h>

int	main(void) {
	char str[50] = "Hello, World!";
	printf("Before memset: %s\n", str);

	// Fill the first 5 characters with '-'
	ft_memset(str, '-', 5);

	printf("After memset: %s\n", str);
	return (0);
}

*/
