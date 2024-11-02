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

#include "libc.h"
char *ft_substr(char const *s, unsigned int start,size_t len)
{
    char *ptr ;
    int l = len ; 
    int i = 0;

    ptr = (char *)malloc(len);

    while(i<l)
    {
        ptr[i]=s[start];
        i++;
        start++;
    }
    return (ptr);
}
// #include <stdio.h>
// int main()
// {

//     int pos , len = 0;

//     // Testcase1
//     char string[14] = "geeksforgeeks";
//     char *p;

//     // Initialize pos, len i.e., starting
//     // index and len upto which we have to
//     // get substring respectively.
//     pos = 6;
//     len = 5;
//     printf("String: %s ", string);
//     p=ft_substr(string,pos,len);
//     printf("\nsubstring is: %s ",p);

//     return 0;
// }
