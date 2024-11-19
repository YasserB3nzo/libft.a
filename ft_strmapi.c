/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <ybenzidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:01:07 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/17 21:27:03 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	ptr = malloc(ft_strlen(s) + 1);
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
//  char add (unsigned int a, char b)
//  {
// 	(void)a;
// 	b = b + 32;
// 	return (b);
//  }
// int main()
// {

// 	int b = 10;
// 	int *a  = &b;
// 	char (*s)(unsigned int, char) = &add;
// }