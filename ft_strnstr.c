/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 20:09:24 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/02 20:09:25 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
char 	*ft_strnstr (char *s1, char *s2, size_t n)
{
    size_t i = 0;
    int l = ft_strlen(s2);
    if(s2[i]== '\0')
        return(s1);
    while(i<n && s1[i])
    {
        if(s1[i]==s2[0] && (i+l)<n)
        {
            if(ft_strncmp(&s1[i],s2,l)==0)
                return(&s1[i]);
        }
        i++;
    }
    return 0;
}
/*#include<stdio.h>
int main()
{
    char *res = ft_strnstr("lorem ipsum dolor sit amet", "", 10);
    printf("%s",res);
}*/