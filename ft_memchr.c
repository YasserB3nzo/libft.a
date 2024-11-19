/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <ybenzidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:58:39 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/16 18:08:13 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr ;
	unsigned char	value ;

	ptr = (unsigned char *)s ;
	value = (unsigned char)c;
	while (n--)
	{
		if (*ptr == value)
		{
			return ((void *)ptr);
		}
		ptr++;
	}
	return (NULL);
}

// int main() {
//     const char *str = "yasserbenzidiya";
//     char target = 'e';
//     size_t length = ft_strlen(str);

//     const char *result = (const char *)ft_memchr(str, target, length);

//     if (result != NULL) {
//         printf("Substring starting from '%c': %s\n", target, result);
//     } else {
//         printf("Character '%c' not found in the string.\n", target);
//     }

//     return (0);
// }
