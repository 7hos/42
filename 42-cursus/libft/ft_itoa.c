/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 00:00:50 by thossain          #+#    #+#             */
/*   Updated: 2023/11/22 00:01:06 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_get_len(long int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void	ft_fill(char *str, long int n, int sign, int len)
{
	if (n < 0)
	{
		sign = -1;
		n *= -1;
	}
	while (len--)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	if (sign == -1 && !++len)
		str[len] = '-';
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		last;
	int		sign;

	sign = 1;
	len = ft_get_len(n);
	last = len;
	if (n == 0)
		return (ft_strdup("0"));
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	ft_fill(str, n, sign, len);
	str[last] = '\0';
	return (str);
}
