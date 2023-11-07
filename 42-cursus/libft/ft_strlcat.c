/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:12:28 by thossain          #+#    #+#             */
/*   Updated: 2023/11/06 23:37:03 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	z;

	i = 0;
	z = 0;
	while (dst[i] && i < size)
		i++;
	while (src[z] && (i + z + 1) < size)
	{
		dst[i + z] = src[z];
		z++;
	}
	if (i < size)
		dst[i + z] = '\0';
	return (i + ft_strlen(src));
}
