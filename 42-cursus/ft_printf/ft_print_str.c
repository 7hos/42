/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:14:45 by thossain          #+#    #+#             */
/*   Updated: 2023/12/21 21:14:58 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		ft_print_char((int)*str);
		++count;
		++str;
	}
	return (count);
}
