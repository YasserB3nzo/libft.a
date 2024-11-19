/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <ybenzidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:55:38 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/16 21:54:54 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_calloc(size_t num_elements, size_t element_size)
{
    void *ptr;
    size_t total_size;

    if (num_elements != 0 && element_size > SIZE_MAX / num_elements)
        return (NULL);
    total_size = num_elements * element_size;
    ptr = malloc(total_size);
    if (!ptr)
        return (NULL);
    ft_memset(ptr, 0, total_size);
    return (ptr);
}

//if we passed size max in both parameters we will get an overflow
// the overflow will reesult some undefined behavior
//overflow is when a calculation result is larger than the allocated memory , so it wraps around and give some undefined behavior 
// total size == 0 is handled by allocating 0 bytes and returning the pointer , and  that block of memory is not accessible and treated as a empty block
// the calloc(0) , is handelled by the malloc  , since the return value dependes on the system , it may return a null pointer or a pointer to a block of memory that is not accessible







/*int main() {
    int *ptr;
    
    // Use smaller values for testing
    ptr = ft_calloc(5, sizeof(int));  // Allocating space for 5 integers
    
    if (!ptr) {
        printf("Memory allocation failed\n");
    } else {
        // Assuming the memory was allocated successfully, print the values
        printf("%d\n", *ptr);         // First element
        printf("%d\n", *(ptr + 1));   // Second element
        printf("%d\n", *(ptr + 2));   // Third element
        printf("%d\n", *(ptr + 3));   // Fourth element
        printf("%d\n", *(ptr + 4));   // Fifth element
        
        free(ptr);  // Don't forget to free the memory
    }

    return 0;
}*/

