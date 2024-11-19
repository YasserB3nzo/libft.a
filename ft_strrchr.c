/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <ybenzidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:11:56 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/16 17:16:47 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == (char)(c))
		{
			return ((char *)(s + i));
		}
		i--;
	}
	if (s[0] == (char)(c))
	{
		return ((char *)(s));
	}
	return (NULL);
}
// #include<stdio.h>
// int	main(void)
// {
// 	//const char *tst="yasser benzidiya";
// 	//char c = '\0';
// 	printf("%s",ft_strrchr( "yasser benzidiya", 'e'));
// }
