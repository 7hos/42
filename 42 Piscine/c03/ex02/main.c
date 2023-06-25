/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 19:40:38 by thossain          #+#    #+#             */
/*   Updated: 2023/03/20 13:09:50 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	*test;
	char	test_dest[3] = "42";
	char	test_src[8] = "Pescine";

	test = ft_strcat(test_dest, test_src);
	printf("%s\n", test);
	return (0);
}
