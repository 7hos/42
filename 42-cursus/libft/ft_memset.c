/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:54:58 by thossain          #+#    #+#             */
/*   Updated: 2023/11/01 18:32:42 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * The C library function void *memset(void *str, int c, size_t n)
 * copies the character c (an unsigned char) to the first n characters of the
 * string pointed to, by the argument str.
 *
 * str: A pointer to the memory block to be filled with the value.
 * c: The value (character or byte) to be copied to the memory block.
 * n: The number of bytes to be filled with the value c.
 */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)str;
	while (n > 0)
	{
		*(p++) = (unsigned char)c;
		n--;
	}
	return (str);
}

/* 
 * TEST
 *
#include <stdio.h>

void *ft_memset(void *str, int c, size_t n);

int main() {
    // Define a character array to test the ft_memset function
    char buffer[20];
    size_t length = 10; // Number of bytes to set

    // Initialize the buffer with some values
    for (int i = 0; i < length; i++) {
        buffer[i] = 'A';
    }

    // Call the ft_memset function to set 'B' in the first 10 bytes of the buffer
    ft_memset(buffer, 'B', length);

    // Print the modified buffer
    for (int i = 0; i < 20; i++) {
        printf("%c ", buffer[i]);
    }

    printf("\n");

    return 0;
}
*/
