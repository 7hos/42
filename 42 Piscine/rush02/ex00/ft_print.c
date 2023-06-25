/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 13:31:51 by alimotta          #+#    #+#             */
/*   Updated: 2023/03/19 13:56:22 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_find(int number, char *c);
void	ft_find_base(int number, char *c);

void	ft_print_billion(int nb, char *c, int div)
{
	div = nb / 1000000000;
	ft_find(div, c);
	ft_find_base(1000000000, c);
}

void	ft_print_million(int nb, char *c, int div, int rem)
{
	div = nb / 1000000;
	rem = div % 1000;
	if (rem == 0)
		return ;
	div = rem / 100;
	rem = rem % 100;
	if (div > 0)
	{
		ft_find(div, c);
		ft_find_base(100, c);
	}	
	div = rem / 10;
	rem = rem % 10;
	if (div > 1)
	{	
		ft_find_base(div *= 10, c);
		if (rem != 0)
			ft_find_base(rem, c);
	}
	else if (div != 0 || rem != 0)
		ft_find_base(div = div * 10 + rem, c);
	ft_find_base(1000000, c);
}

void	ft_print_thousand(int nb, char *c, int div, int rem)
{
	div = nb / 1000;
	rem = div % 1000;
	if (rem == 0)
		return ;
	div = rem / 100;
	rem = rem % 100;
	if (div > 0)
	{
		ft_find(div, c);
		ft_find_base(100, c);
	}
	div = rem / 10;
	rem = rem % 10;
	if (div > 1)
	{
		ft_find_base(div *= 10, c);
		if (rem != 0)
			ft_find(rem, c);
	}
	else if (div != 0 || rem != 0)
		ft_find_base(div = div * 10 + rem, c);
	ft_find_base(1000, c);
}

void	ft_print_hundred(int nb, char *c, int div, int rem)
{
	rem = nb % 1000;
	if (rem == 0)
		return ;
	div = rem / 100;
	rem = rem % 100;
	if ((div > 0))
	{
		ft_find(div, c);
		ft_find_base(100, c);
	}
	div = rem / 10;
	rem = rem % 10;
	if ((div) > 1)
	{
		ft_find_base(div *= 10, c);
		if (rem != 0)
			ft_find(rem, c);
	}
	else if (div != 0 || rem != 0)
		ft_find_base(div = div * 10 + rem, c);
}

void	ft_print_zero(int nb, char *c)
{
	ft_find(nb, c);
}
