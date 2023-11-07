/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:32:24 by thossain          #+#    #+#             */
/*   Updated: 2023/11/06 20:16:29 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * #include <stdio.h>
 * #include <string.h>
 */
#include "libft.h"

size_t	ft_strlcpy(char *destination, const char *source, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (source[i])
			i++;
		return (i);
	}
	while (i < size - 1 && source[i] != '\0')
	{
		destination[i] = source[i];
		i++;
	}
	if (i < size)
		destination[i] = '\0';
	while (source[i] != '\0')
		i++;
	return (i);
}
/*
int	main()
{
	char str[] = "London42";
	char strDest[] = "";
	int r = ft_strlcpy(strDest, str, 4);

	printf("%s\n", strDest);
	printf("%d", r);
}
*/
