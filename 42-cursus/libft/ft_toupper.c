/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:17:49 by thossain          #+#    #+#             */
/*   Updated: 2023/11/07 17:05:51 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
 * #include <ctype.h>
 * #include <stdio.h>
 */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/*
int main()
{
    int j = 0;
    char str[] = "geekforgeeks\n";
    char ch;
 
    while (str[j]) {
        ch = str[j];
        putchar(ft_toupper(ch));
        j++;
    }
 
    return 0;
}
*/
