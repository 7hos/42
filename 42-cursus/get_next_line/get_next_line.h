/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:25:47 by thossain          #+#    #+#             */
/*   Updated: 2024/02/14 18:53:42 by thossain         ###   ########.fr       */
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
//Prototype
char	*read_file(int fd, char *res);
char	*ft_line(char *buffer);
char	*ft_free(char *buffer, char *buf);
char	*ft_next(char *buffer);
char	*get_next_line(int fd);
void	*ft_calloc(size_t elementCount, size_t elementSize);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(const char *theString);
char	*ft_strchr(const char *string, int searchedChar);
char	*ft_strjoin(char const *s1, char const *s2);
#endif
