/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: ybenzidi <ybenzidi@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/11/01 14:41:26 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/02 17:24:06 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int i;

    i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
