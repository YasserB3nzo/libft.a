/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <ybenzidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:59:57 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/16 17:37:35 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// #include<stdio.h>
// int main()
// {
// 	//int l=strlen(NULL);
//     int i=ft_strlen(NULL);
//     printf("%d\n",i);
// }
