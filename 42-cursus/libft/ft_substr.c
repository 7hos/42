/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 20:42:59 by thossain          #+#    #+#             */
/*   Updated: 2023/11/21 18:42:48 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	if (start >= ft_strlen(s))
	{
		str = (char *)malloc(sizeof(char));
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	while (s[i] && j < len)
	{
		i++;
		j++;
	}
	str = (char *)malloc(sizeof(char) * (j + 1));
	ft_strlcpy(str, &s[start], j + 1);
	return (str);
}
/*
int main()
{
	char* str;

	str = ft_substr("From Paris to London!", 8, 9);
	printf("%s\n", str);

	return 0;
}
*/
