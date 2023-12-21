/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 20:19:09 by thossain          #+#    #+#             */
/*   Updated: 2023/12/21 20:19:16 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_print_char(char c)
{
	write(1, &c, 1);
}
/*
int main()
{	char test;

	test = 'F';
    ft_print_char(test);
	printf("%c\n", test); 
}
*/