/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:32:38 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/10/26 18:32:42 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
size_t ft_strlen(const char *str)
{
    int i;
    i = 0;
    while(str[i])
        i++;
    return (i);
}

// #include<stdio.h>
// int main()
// {
//     int *i=ft_strlen("yasserbenzidiya");
//     printf("%d",*i);
// }