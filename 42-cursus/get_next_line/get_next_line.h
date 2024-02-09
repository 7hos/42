/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:25:47 by thossain          #+#    #+#             */
/*   Updated: 2024/01/24 17:25:52 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
// Standard C Libraries
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
#endif
// Protoypes
char	*get_next_line(int fd);
#endif