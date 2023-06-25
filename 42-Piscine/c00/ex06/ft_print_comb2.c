/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:46:20 by thossain          #+#    #+#             */
/*   Updated: 2023/03/08 20:19:23 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	ft_print_comb2(void)
{
	int	first_part;
	int	second_part;

	first_part = -1;
	while (first_part++ < 98)
	{
		second_part = first_part;
		while (second_part++ < 99)
		{
			ft_putchar('0' + (first_part / 10));
			ft_putchar('0' + (first_part % 10));
			ft_putchar(' ');
			ft_putchar('0' + (second_part / 10));
			ft_putchar('0' + (second_part % 10));
			if (first_part != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			else
				return (0);
		}
	}
}
