/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:28:58 by thossain          #+#    #+#             */
/*   Updated: 2023/03/16 16:00:23 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	test_upper[] = "qWeRty";
	char	test_empty[] = "qwertyuiop";

	ft_strupcase(test_upper);
	ft_strupcase(test_empty);
	printf("%s \n", ft_strupcase(test_upper));
	printf("%s \n", ft_strupcase(test_empty));
}
