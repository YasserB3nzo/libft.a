/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <ybenzidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:59:01 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/17 21:25:35 by ybenzidi         ###   ########.fr       */
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

// #include <stdio.h>

// int	main(void) {
// 	int a =  0;
// 	ft_memset(&a,255,4);
// 	ft_memset(&a,0b11111011,1);

// 	printf("Before memset: %d\n", a);

// 	return (0);
// }
