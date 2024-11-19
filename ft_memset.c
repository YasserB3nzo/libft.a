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

	if (!ptr)
		return (NULL);
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
/*int main()
{
	int a =0;
	ft_memset(&a,0b00000000,3);
	ft_memset((char *)&a+3,0b10000000,1);
	printf("%d",a);
}*/