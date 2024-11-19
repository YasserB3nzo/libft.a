/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <ybenzidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:04:57 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/16 17:04:57 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nb)
{
    int i = 0;
    int sign = 1;
    unsigned long res = 0;

    while ((nb[i] >= 9 && nb[i] <= 13) || (nb[i] == 32))
        i++;
    if (nb[i] == '-' || nb[i] == '+')
    {
        if (nb[i] == '-')
            sign = -1;
        i++;
    }
    while (ft_isdigit(nb[i]))
    {
        res = (res * 10) + (nb[i] - '0');
        i++;
    }
    if(res > LONG_MAX)
        return (0 - (sign == 1));
    return (int)(res * sign);
}
/*#include <stdio.h>
int main()
{
    printf("%d\n",ft_atoi("22222222222222222222222222222"));
    printf("%d",atoi("22222222222222222222222222222"));
}*/
// const char , tell the compiler to not modify the string and its for read access only
// we declare res as long so we can handle the max value of int 
// casting res to int to return it as int