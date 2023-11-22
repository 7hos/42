/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:25:53 by thossain          #+#    #+#             */
/*   Updated: 2023/11/22 20:58:16 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	char	*temp_str;

	if (!s)
		return ;
	temp_str = s;
	while (*temp_str)
	{
		write(fd, temp_str++, 1);
	}
}
