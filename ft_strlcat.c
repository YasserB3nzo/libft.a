/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 20:08:28 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/02 20:08:30 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t strlcat(char *dst, const char *src, size_t size)
{
    size_t ldst = ft_strlen(dst);
    size_t lsrc = ft_strlen(src);
    size_t i = 0;

    if (size <= ldst)
        return size + lsrc;

    while (src[i] && ldst + i < size - 1)
    {
        dst[ldst + i] = src[i];
        i++;
    }

    dst[ldst + i] = '\0';

    return ldst + lsrc;
}
int main()
{
    
}
