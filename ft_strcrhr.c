/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcrhr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 20:06:16 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/02 20:06:17 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strrchr(const char *str, int c)
{
	int i = 0;
	char *last_occurrence;

	last_occurrence = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
		{
			last_occurrence = (char *)&str[i];
		}
		i++;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return (last_occurrence);
}
