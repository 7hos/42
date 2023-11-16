/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:46:18 by thossain          #+#    #+#             */
/*   Updated: 2023/11/16 21:07:53 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * strcmp() function which is used for comparing two strings, comparison is
 * limited to the number of characters specified 'n' during the function call.
 */
#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while ((str1[i] == str2[i]) && str1[i] && str2 [i] && i < (n -1))
		i++;
	return ((unsigned char)str1[i] - (unsigned char )str2[i]);
}
/*
#include <stdio.h>
#include <string.h>
 
 int main ()
 {
   char str1[20];
   char str2[20];
   int result;

   //Assigning the value to the string str1
   strcpy(str1, "hello");

   //Assigning the value to the string str2
   strcpy(str2, "helLO WORLD");

   //This will compare the first 5 characters
   result = ft_strncmp(str1, str2, 5);

   if(result > 0) {
      printf("ASCII value of first unmatched character of 
      str1 is greater than str2");
   } else if(result < 0) {
      printf("ASCII value of first unmatched character of
      str1 is less than str2");
   } else {
      printf("Both the strings str1 and str2 are equal");
   }

   return 0;
}
*/
