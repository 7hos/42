/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 03:11:41 by thossain          #+#    #+#             */
/*   Updated: 2023/03/16 15:13:22 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	test_printable[] = "!#$%&@ABCabc~";
	char	test_unprintable[] = "NUL";
	char	test_empty[] = "";

	ft_str_is_printable(test_printable);
	ft_str_is_printable(test_unprintable);
	ft_str_is_printable(test_empty);
	printf("%d \n", ft_str_is_printable(test_printable));
	printf("%d \n", ft_str_is_printable(test_unprintable));
	printf("%d \n", ft_str_is_printable(test_empty));
}
