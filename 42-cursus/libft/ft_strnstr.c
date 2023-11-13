/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:58:22 by thossain          #+#    #+#             */
/*   Updated: 2023/11/13 20:19:21 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * The strnstr() function locates the first occurrence of the null-terminated
 * string little in the string big, where not more than len characters are
 * searched.  Characters that appear after a ‘\0’ character are not searched.
 */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little == NULL || little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < n)
	{
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && i + j < n)
			{
				if (little[j + 1] == '\0')
					return ((char *)big + i);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main()
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;
	
	ptr = ft_strnstr(largestring, smallstring, 7);
	printf("%s\n", ptr);
	printf("this is C: %s\n", strnstr(largestring, smallstring, 7));
}
*/
