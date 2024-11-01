/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <ybenzidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:41:45 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/10/31 14:52:21 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trimmed_str;

	if (!s1 || !set)
		return (NULL);

	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;

	end = ft_strlen(s1) - 1;
	while (end > start && is_in_set(s1[end], set))
		end--;

	trimmed_str = (char *)malloc(end - start + 2);
	if (!trimmed_str)
		return (NULL);

	ft_strlcpy(trimmed_str, s1 + start, end - start + 2);
	return (trimmed_str);
}

#include<stdio.h>
int main ()
{
   char *s1 = "isir 3lahi5i5";
   char *set = "i5";

   char *p = ft_strtrim(s1, set);
   printf("%s",p);
}

