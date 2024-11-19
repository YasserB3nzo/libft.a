/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <ybenzidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:58:39 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/16 18:08:13 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr ;
	unsigned char	value ;

	ptr = (unsigned char *)s ;
	value = (unsigned char)c;
	while (n--)
	{
		if (*ptr == value)
		{
			return ((void *)ptr);
		}
		ptr++;
	}
	return (NULL);
}
// const value to be sure that the value is read only 
// void to be able to point to any type of data 
// ptr is not const , bcs we need to modify it
// ptr casted to char ro compare at bye level
// why unsigned char , bcs values more then 127 will be treated as negative values
//
/*#include <stdio.h>
int main()
{
	const char *str = "Hello World";
	ft_memchr(str, 'W', 11);
	printf("%s\n", (char *)ft_memchr(str, 'W', 11));
}*/