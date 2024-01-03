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

void	ft_putcharacter_length(char character, int *length)
{
	write(1, &character, 1);
	(*length)++;
}
/*
int main()
{
    int length_counter = 0;

    ft_putcharacter_length('A', &length_counter);
    ft_putcharacter_length('B', &length_counter);
    ft_putcharacter_length('C', &length_counter);

    printf("Length: %d\n", length_counter);

    return 0;
}
*/