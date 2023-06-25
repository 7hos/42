/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 22:25:24 by thossain          #+#    #+#             */
/*   Updated: 2023/03/19 19:32:34 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	printf("%d\n", ft_strncmp("Pescine", "Pescine42", 10));
	printf("%d\n", ft_strncmp("Pescine", "Pesc", 10));
}
