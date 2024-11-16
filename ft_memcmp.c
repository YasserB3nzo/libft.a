/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: ybenzidi <marvin@42.fr>                    +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/11/02 20:05:19 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/02 20:05:21 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	unsigned char	*ptr;
	unsigned char	*p;

	ptr = (unsigned char *)ptr1;
	p = (unsigned char *)ptr2;
	while (num--)
	{
		if (*ptr != *p)
		{
			return (*ptr - *p);
		}
		ptr++;
		p++;
	}
	return (0);
}

// #include <stdio.h>
// int main ()
// {
//   char buffer1[] = "yasser benzidiy";
//   char buffer2[] = "yasser benzidiy";

//   int n;

//   n=ft_memcmp ( buffer1, buffer2, sizeof(buffer1) );

//   if (n>0) printf ("'%s' is greater than '%s'.\n",buffer1,buffer2);
//   else if (n<0) printf ("'%s' is less than '%s'.\n",buffer1,buffer2);
//   else printf ("'%s' is the same as '%s'.\n",buffer1,buffer2);

//   return (0);
// }
