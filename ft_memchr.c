/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 20:04:53 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/02 20:04:55 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n) 
{
    unsigned const char *ptr = s;               
    unsigned const char value = (unsigned char)c; 

    while (n--) {
        if (*ptr == value) {
            return (void *)ptr; 
        }
        ptr++;
    }
    return NULL;
}

// int main() {
//     const char *str = "yasserbenzidiya"; 
//     char target = 'e';                  
//     size_t length = ft_strlen(str);      

//     const char *result = (const char *)ft_memchr(str, target, length);

//     if (result != NULL) {
//         printf("Substring starting from '%c': %s\n", target, result);
//     } else {
//         printf("Character '%c' not found in the string.\n", target);
//     }

//     return 0;
// }
