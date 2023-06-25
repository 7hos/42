/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 02:10:53 by thossain          #+#    #+#             */
/*   Updated: 2023/03/16 02:22:11 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	test_lower[] = "QWerTY";
	char	test_upper[] = "QWERTY";
	char	test_empty[] = "";

	ft_str_is_uppercase(test_lower);
	ft_str_is_uppercase(test_upper);
	ft_str_is_uppercase(test_empty);
	printf("%d \n", ft_str_is_uppercase(test_lower));
	printf("%d \n", ft_str_is_uppercase(test_upper));
	printf("%d \n", ft_str_is_uppercase(test_empty));
}
