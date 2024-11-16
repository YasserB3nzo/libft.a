/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 20:06:56 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/16 17:57:38 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len;
	int		start;
	int		index;

	len = 0;
	start = 0;
	index = 0;
	len = ft_strlen(s1) + ft_strlen(s2)+1;
	ptr = (char *) malloc (len);
	if (!ptr)
		return (NULL);
	while (s1[start])
	{
		ptr[index++] = s1[start++];
	}
	start = 0;
	while (s2[start])
	{
		ptr[index++] = s2[start++];
	}
	ptr[index] = '\0';
	return (ptr);
}
/*#include <stdio.h>

int	main(void)
{
	char *str;
	str = ft_strjoin("\0", "benzidiya");
	printf("%s", str);
}*/
