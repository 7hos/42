/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:05:11 by thossain          #+#    #+#             */
/*   Updated: 2023/03/16 16:18:42 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	test_upper[] = "qWeRty";
	char	test_empty[] = "";

	ft_strlowcase(test_upper);
	ft_strlowcase(test_empty);
	printf("%s \n", ft_strlowcase(test_upper));
	printf("%s \n", ft_strlowcase(test_empty));
}
