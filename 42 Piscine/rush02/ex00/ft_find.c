/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:25:40 by alimotta          #+#    #+#             */
/*   Updated: 2023/03/19 16:06:20 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_check = 0;
int	g_letter = 0;

//This function serch one digit number in the dictionary & add a space
void	ft_find(int number, char *c)
{
	int	i;

	i = 0;
	g_letter = 0;
	while (c[i])
	{
		if (c[i] == (number + 48))
		{
			if (g_check > 0)
				write (1, " ", 1);
			g_check++;
			while (c[i] != '\n')
			{
				if ((c[i] >= 'a' && c[i] <= 'z') || g_letter == 1)
				{
					g_letter = 1;
					write(1, &c[i], 1);
				}
				i++;
			}
			return ;
		}
		i++;
	}
}

//This function serch for 2+ digit numbers in the dictionary
void	ft_find_bigger(char *base, char *c, int i, int j)
{
	i = 0;
	j = 0;
	g_letter = 0;
	while (c[j])
	{
		while (c[j + i] == base[i] && base[i] != '\0')
			i++;
		if (base[i] == '\0')
		{
			while (c[j] != '\n')
			{
				if ((c[j] >= 'a' && c[j] <= 'z') || g_letter == 1)
				{
					g_letter = 1;
					write(1, &c[j], 1);
				}
				j++;
			}
			return ;
		}
		j++;
		i = 0;
	}
}

//This function trasform the 2+ digit number in an array of char & add a space
void	ft_find_base(int number, char *c)
{
	char	base[20];
	int		nb;
	int		i;
	int		len;
	int		mod;

	len = 0;
	nb = number;
	while (nb != 0)
	{
		len++;
		nb = nb / 10;
	}
	i = -1;
	nb = number;
	while (++i < len)
	{
		mod = nb % 10;
		nb = nb / 10;
		base[len - (i + 1)] = mod + '0';
	}
	base[len] = '\0';
	if (g_check++ > 0)
		write (1, " ", 1);
	ft_find_bigger(base, c, 0, 0);
}
