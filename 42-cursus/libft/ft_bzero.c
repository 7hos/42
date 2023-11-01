/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:40:46 by thossain          #+#    #+#             */
/*   Updated: 2023/11/01 21:07:40 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* void bzero(char *s, int n);
 * The bzero() function copies n bytes, each with a value of zero, into string s.
 * - s Points to a buffer that zeros are copied into.
 * - n Is the number of zeros to be copied into the buffer.
 *
 */
/*
 * #include <stdio.h>
 * #include <string.h>
 */
#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	unsigned char	*p;
	size_t			i;

	p = b;
	i = 0;
	while (i < len)
	{
		p[i] = 0;
		i++;
	}
}

/*
 * TEST
 *
int main(void)
{
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Original Array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }

    ft_bzero(&numbers[3], 4 * sizeof(int));

    printf("\nArray after ft_bzero: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}
*/
