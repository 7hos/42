/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 23:15:53 by thossain          #+#    #+#             */
/*   Updated: 2023/03/16 00:15:50 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	test_lower[] = "qwerty";
	char	test_upper[] = "qWeRty";
	char	test_empty[] = "";

	ft_str_is_lowercase(test_lower);
	ft_str_is_lowercase(test_upper);
	ft_str_is_lowercase(test_empty);
	printf("%d \n", ft_str_is_lowercase(test_lower));
	printf("%d \n", ft_str_is_lowercase(test_upper));
	printf("%d \n", ft_str_is_lowercase(test_empty));
}
