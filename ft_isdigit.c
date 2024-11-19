/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <ybenzidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:58:25 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/16 21:56:31 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*int	ft_isdigit2(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
#include <stdio.h>
int main()
{
	printf("%d\n",ft_isdigit(305));
	printf("%d\n",ft_isdigit2(305));
}*/
