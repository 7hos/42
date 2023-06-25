/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 23:50:02 by thossain          #+#    #+#             */
/*   Updated: 2023/03/20 13:07:15 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	*test;
	char	test_str[20] = "Lon abc dra";
	char	test_to_find[20] = "abc";
	
	test = ft_strstr(test_str, test_to_find);	
	printf("%s\n", test);

}
