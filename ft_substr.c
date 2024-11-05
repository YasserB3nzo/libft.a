/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 20:09:39 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/02 20:09:41 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_substr(char const *s, unsigned int start,size_t len)
{
    char *ptr ;
    int l = len ; 
    int i = 0;

    ptr = (char *)malloc((len)+1);
    if(!ptr)
        return NULL;
    while(i<l && s[start])
    {
        ptr[i]=s[start];
        i++;
        start++;
    }
    ptr[i]='\0';
    return (ptr);
}
/*#include <stdio.h>
int main()
{

     int pos , len = 0;

    char str[14] = "geeksforgeeks";
     char *p;

     pos = 6;
     len = 5;
     printf("String: %s ", str);
     p=ft_substr(str, 7, 10);
     printf("\nsubstring is: %s ",p);

     return 0;
}*/
