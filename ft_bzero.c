/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <ybenzidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:56:24 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/16 13:56:24 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
// #include <stdio.h>
// int main()
// {
// 	char	str[]= "1337";
// 	int		i;

// 	ft_bzero(str+1, 2);
// 	i = 0;
// 	while (i < 4)
// 	{
// 		printf("str[%d] = %d (char: '%c')\n", i, str[i], str[i]);
// 		i++;
// 	}
// }
