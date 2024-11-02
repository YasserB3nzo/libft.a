/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 20:02:52 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/02 20:02:53 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    char digit;
    
    if (n == -2147483648)
        write(fd, "-2147483648", 11);
    else if (n < 0)
    {
        write(fd, "-", 1);
        ft_putnbr_fd(-n, fd);
    }
    else
    {
        if (n > 9)
        {
            ft_putnbr_fd(n / 10, fd);
        }
        digit = (n % 10) + '0';
        write(fd, &digit, 1);
    }
}