/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 20:09:05 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/02 20:09:07 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i = 0;
    while(s1[i] && s2[i] && i<n)
    {
        if(s1[i] != s2[i])
            return(s1[i]-s2[i]);
        i++;
    }
    if(i==n)
    {
        return(0);
    }
    return(s1[i]-s2[i]);
}
/*#include<stdio.h>
int main()
{
    printf("%d",ft_strncmp("yassermachibenzidiya","yasserbenzidiya",6));
}*/
