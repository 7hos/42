/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 02:28:59 by thossain          #+#    #+#             */
/*   Updated: 2023/03/20 02:45:47 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	main(void)
{
	printf("%lu\n", strlen("ciaoooo"));
	printf("%d\n", ft_strlen("testthefunction"));
}
