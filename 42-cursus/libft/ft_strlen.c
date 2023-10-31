/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:03:42 by thossain          #+#    #+#             */
/*   Updated: 2023/10/31 16:42:55 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * strlen() returns the number of bytes rather than
 * the number of characters in a string.
 
#include <stdio.h>
#include <string.h>
*/
#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
int main()
{
    char str[] = "GeeksforGeeks";
     
    int length = strlen(str);
    printf("Length of string is : %d", length);
     
    return 0;
    

    char str[] = "London 42";
    int result = ft_strlen(str);
    printf("The length of the string is %d.\n", result);
    return 0;
}
*/
