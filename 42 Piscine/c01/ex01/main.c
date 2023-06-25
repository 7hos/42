/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 18:09:28 by thossain          #+#    #+#             */
/*   Updated: 2023/03/12 18:20:25 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	x;
	int	*x1;
	int	**x2;
	int	***x3;
	int	****x4;
	int	*****x5;
	int	******x6;
	int	*******x7;
	int	********x8;
	int	*********nbr;

	x = 7;
	x1 = &x;
	x2 = &x1;
	x3 = &x2;
	x4 = &x3;
	x5 = &x4;
	x6 = &x5;
	x7 = &x6;
	x8 = &x7;
	nbr = &x8;
	ft_ultimate_ft(nbr);
	printf ("%d", x);
	return (0);
}
