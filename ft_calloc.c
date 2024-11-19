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
#include <stdio.h>
#include <stdlib.h>

void *ft_calloc(size_t num_elements, size_t element_size) {
    void *ptr;
    size_t total_size = num_elements * element_size;

    // Check for overflow
    if (num_elements != 0 && element_size > SIZE_MAX / num_elements)
        return NULL;

    ptr = malloc(total_size);
    if (!ptr)
        return NULL;

    // Initialize allocated memory to 0
    for (size_t i = 0; i < total_size; i++) {
        ((unsigned char *)ptr)[i] = 0;
    }

    return ptr;
}

int main() {
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
}

