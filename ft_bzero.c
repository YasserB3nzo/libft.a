/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <ybenzidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:53:07 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/10/28 16:37:51 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int main()
{
	char	str[] = "1337";
	int		i;

	ft_bzero(str, 2);
	i = 0;
	while (i < 4)
	{
		printf("str[%d] = %d (char: '%c')\n", i, str[i], str[i]);
		i++;
	}
}
*/