/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 23:59:18 by thossain          #+#    #+#             */
/*   Updated: 2023/03/14 20:14:01 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	tmp;

	counter = 0;
	size--;
	while (counter < size)
	{
		tmp = tab[counter];
		tab[counter] = tab[size];
		tab[size] = tmp;
		counter++;
		size--;
	}
}
