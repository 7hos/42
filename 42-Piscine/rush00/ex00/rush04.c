/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prebeca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 12:31:01 by prebeca           #+#    #+#             */
/*   Updated: 2023/03/05 18:32:52 by dvaleev          ###   ########.fr       */
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
			ft_draw_line(x, 'A', 'B', 'C');
		else
		{
			if (i == y - 1)
				ft_draw_line(x, 'C', 'B', 'A');
			else
				ft_draw_line(x, 'B', ' ', 'B');
		}
		i++;
	}
}
