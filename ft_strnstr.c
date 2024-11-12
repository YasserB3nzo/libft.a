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
char 	*ft_strnstr (char *s1, char *to_find, size_t n)
{
    size_t i = 0;
    int l = ft_strlen(to_find);

    if(to_find[i]== '\0')
        return(s1);
    if (s1==to_find)
        return(s1);
    
    while(i<n && s1[i])
    {
        if(s1[i]==to_find[0] && (i+l)<n)
        {
            if(ft_strncmp(&s1[i],to_find,l)==0)
                return(&s1[i]);
        }
        i++;
    }
    return 0;
}
/*#include <stdio.h>
#include <string.h>

int main() {
    char *str = "Hello, world!";
    char *result = ft_strnstr(str, str, strlen(str));
    if (result) {
        printf("Found: %s\n", result);
    } else {
        printf("Not found\n");
    }
    return 0;
}
*/