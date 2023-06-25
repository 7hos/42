/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 22:21:50 by thossain          #+#    #+#             */
/*   Updated: 2023/03/13 23:47:29 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	position_counter;

	position_counter = 0;
	while (str[position_counter])
	{
		position_counter++;
	}
	return (position_counter);
}
