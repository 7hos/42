/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prebeca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 09:41:19 by prebeca           #+#    #+#             */
/*   Updated: 2023/03/05 18:31:49 by dvaleev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_draw_line(int var, char d, char m, char f)
{
	int	j;

	j = 0;
	while (j < var)
	{
		if (j == 0)
			ft_putchar(d);
		else
		{
			if (j == var - 1)
				ft_putchar(f);
			else
				ft_putchar(m);
		}
		j++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (i < y)
	{
		if (i == 0)
			ft_draw_line(x, '/', '*', '\\');
		else
		{
			if (i == y - 1)
				ft_draw_line(x, '\\', '*', '/');
			else
				ft_draw_line(x, '*', ' ', '*');
		}
		i++;
	}
}
