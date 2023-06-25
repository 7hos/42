/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 00:21:57 by thossain          #+#    #+#             */
/*   Updated: 2023/03/16 01:17:29 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	test_digit[] = "0159753";
	char	test_no_digit[] = "qw3r1y";
	char	test_empty[] = "";

	ft_str_is_numeric(test_digit);
	ft_str_is_numeric(test_no_digit);
	ft_str_is_numeric(test_empty);
	printf("%d \n", ft_str_is_numeric(test_digit));
	printf("%d \n", ft_str_is_numeric(test_no_digit));
	printf("%d \n", ft_str_is_numeric(test_empty));
}
