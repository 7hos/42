/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 04:08:03 by thossain          #+#    #+#             */
/*   Updated: 2023/03/16 02:05:01 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src [] = "42London";
	char	dest[7];

	printf("%s\n", ft_strncpy(dest, src, 7));
	printf("%s\n", strncpy(dest, src, 7));
}
