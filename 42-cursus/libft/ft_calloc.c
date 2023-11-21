/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:46:38 by thossain          #+#    #+#             */
/*   Updated: 2023/11/20 18:26:50 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * calloc is a C library function used to dynamically allocate memory for an
 * array of elements. It stands for "contiguous allocation." The calloc function
 * initializes the allocated memory to zero,typically used to allocate memory 
 * for arrays or structures.
 * void *calloc(size_t num_elements, size_t element_size);
 * num_elements: The number of elements to allocate.
 * element_size: The size of each element in bytes.
 */
#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	size_t	total_size;
	void	*ptr;

	total_size = num_elements * element_size;
	ptr = NULL;
	if (num_elements && \
		total_size / num_elements != element_size)
		return (NULL);
	else
	{
		ptr = malloc(total_size);
		if (ptr == NULL)
			return (NULL);
		ft_bzero(ptr, total_size);
	}
	return (ptr);
}

// size_t has a limit of 2**16 - 1, so num_elements * element_size
// must be at or below the limit, so maybe a check for limits?
/*

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate an array of 5 integers
    int *arr = (int *)ft_calloc(5, sizeof(int));

    if (arr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Print the initialized array
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    // Free the allocated memory when done
    free(arr);

    return 0;
}
*/
