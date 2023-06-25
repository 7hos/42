/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 12:55:26 by alimotta          #+#    #+#             */
/*   Updated: 2023/03/19 17:04:20 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

//This function transform the argument from array of char to integer
int	ft_atoi(char *argv)
{
	int			i;
	long int	nb;

	i = 0;
	nb = 0;
	while (argv[i])
	{
		if (!(argv[i] == 32) && !(argv[i] >= 9 && argv[i] <= 13)
			&& !(argv[i] >= '0' && argv[i] <= '9'))
			return (-1);
		i++;
	}
	if (argv[0] == '\0')
		return (-1);
	i = 0;
	while (argv[i] == 32 || (argv[i] >= 9 && argv[i] <= 13))
		i++;
	while (argv[i] >= '0' && argv[i] <= '9')
	{
		nb *= 10;
		nb += argv[i] - 48;
		i++;
	}
	return (nb);
}
