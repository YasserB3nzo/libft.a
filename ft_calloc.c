/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <ybenzidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:55:52 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/10/31 23:13:58 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	void	*ptr;
	size_t	total_size;

	if (num_elements == 0 || element_size == 0)
	{
		ptr = malloc(1);
		if (ptr)
			ft_memset(ptr, 0, 1);  
		return (ptr);
	}

	total_size = num_elements * element_size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, total_size);  
	return (ptr);
}


