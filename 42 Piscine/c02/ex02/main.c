/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:37:07 by thossain          #+#    #+#             */
/*   Updated: 2023/03/15 21:47:22 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	test[] = "9";

	ft_str_is_alpha(test);
	printf("%d \n", ft_str_is_alpha(test));
}
