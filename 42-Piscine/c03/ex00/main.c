/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 21:08:06 by thossain          #+#    #+#             */
/*   Updated: 2023/03/18 21:28:32 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	printf("%d\n", ft_strcmp("42Pescine", "42Pescine"));
	printf("%d\n", ft_strcmp("42Pesci", "42Pescine"));
	printf("%d\n", ft_strcmp("42Pescine", "42Pesci"));
}
