/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:13:27 by thossain          #+#    #+#             */
/*   Updated: 2023/11/02 21:31:12 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*void *memmove(void *dest, const void *src, size_t n)
 *
 * - dest − This is a pointer to the destination array where the content is to 
 *   be copied, type-casted to a pointer of type void*.
 *
 * - src − This is a pointer to the source of data to be copied, type-casted 
 *   to a pointer of type void*.
 * - n − This is the number of bytes to be copied.
*/
/*
 * #include <stdio.h>
 */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	s = src;
	d = dest;
	if (d > s)
	{
		i = n;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
int	main()
{
	char str[] = "Hello, world!";
	char buffer[20];
	
	ft_memmove(buffer, str + 7, 5);
	
	printf("Copied string: %s\n", buffer);
	
	return 0;
}
*/
