/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <ybenzidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:33:58 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/01 14:58:25 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *ptr;
    unsigned int i = 0;
    ptr = malloc(ft_strlen(s)+1);
    if(!ptr)
        return NULL;
    while(s[i])
    {
        ptr[i]=f(i,s[i]);
        i++;
    }
    ptr[i]= '\0';
    return (ptr);
}