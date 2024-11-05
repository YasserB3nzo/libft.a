/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <ybenzidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 23:42:22 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/01 00:40:46 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdlib.h>
#include <limits.h>

static int len_n(int n)
{
    int l = (n <= 0) ? 1 : 0; // Start with 1 if n is 0 or negative (for the '-' or '0' character)
    while (n != 0)
    {
        l++;
        n /= 10;
    }
    return l;
}

char *ft_itoa(int n)
{
    int l = len_n(n);
    char *ptr = (char *)malloc((l + 1) * sizeof(char));
    unsigned int num;

    if (!ptr)
        return NULL;
    ptr[l] = '\0';
    if (n == 0)
    {
        ptr[0] = '0';
        return ptr;
    }
    if (n < 0)
    {
        ptr[0] = '-';
        num = -n;
    }
    else
    {
        num = n;
    }
    while (num > 0)
    {
        ptr[--l] = (num % 10) + '0';
        num /= 10;
    }
    return ptr;
}

/*#include <stdio.h>
int main()
{
    printf("%s",ft_itoa(0));
}*/