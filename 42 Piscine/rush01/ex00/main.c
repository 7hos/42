/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 18:15:45 by thossain          #+#    #+#             */
/*   Updated: 2023/03/11 19:57:20 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

//if we have  to use malloc
// #include <mem.h>

void	main(){
	int	i;
	int	count;
	for(i=1; i<=count; i++)
	{
		printf("%d ",i);
		if( i % 4 == 0)
			printf("\n");
	}
}
