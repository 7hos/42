/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:10:50 by thossain          #+#    #+#             */
/*   Updated: 2023/11/02 16:29:01 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* void *memcpy(void *dest, const void * src, size_t n)
 * 
 * - dest: A pointer to the destination memory location where the data will 
 *   be copied to.
 * - src: A pointer to the source memory location from which data will be copied.
 * - n: The number of bytes to copy from the source to the destination.
 */
/*
 * #include <stdio.h>
 * #include <string.h>
 */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int main()
{
	char source[] = "Hello, world!";
	char destination[20];
	
	ft_memcpy(destination, source, strlen(source) + 1);
	printf("Copied string: %s\n", destination);return 0;
}
*/
