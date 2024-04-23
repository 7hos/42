/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:24:52 by thossain          #+#    #+#             */
/*   Updated: 2024/02/14 18:23:13 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*  - Reads the file descriptor (fd) and appends the content to the existing result (res) string.
    - Continues reading until it reaches the end of file or encounters a newline character.
    - Frees the temporary buffer used for reading.*/
char	*read_file(int fd, char *res)
{
	char	*buffer;
	int		byte_read;

	if (!res)
		res = ft_calloc(1, 1);
	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	byte_read = 1;
	while (byte_read > 0)
	{
		byte_read = read(fd, buffer, BUFFER_SIZE);
		if (byte_read == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[byte_read] = 0;
		res = ft_free(res, buffer);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free(buffer);
	return (res);
}

/*  - Finds the length of the first line in the ¨buffer¨.
    - Allocates memory for a new string (¨line¨) and copies the first line into it.
    - If the first line ends with '\0' or '\n', replaces the last character with '\n'.*/
char	*ft_line(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] && buffer [i] != '\n')
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] && buffer[i] == '\n')
		line[i++] = '\n';
	return (line);
}

/*  - Takes two strings (¨buffer¨ and ¨buf¨), concatenates them using ¨ft_strjoin¨.
    - Frees the original ¨buffer¨ and returns the newly joined string.*/
char	*ft_free(char *buffer, char *buf)
{
	char	*temp;

	temp = ft_strjoin(buffer, buf);
	free(buffer);
	return (temp);
}

/*
    - Finds the length of the first line in the buffer.
    - Allocates memory for a new string (line) containing the remaining content after the first line.
    - Frees the original buffer.*/
char	*ft_next(char *buffer)
{
	int		i;
	int		j;
	char	*line;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	line = ft_calloc((ft_strlen(buffer) - i +1), sizeof(char));
	i++;
	j = 0;
	while (buffer[i])
		line[j++] = buffer[i++];
	free(buffer);
	return (line);
}

/*  - Maintains a static variable ¨buffer¨ to store the remaining content from the previous reads.
    - Calls ¨read_file¨ to read from the file descriptor and concatenate the content to buffer.
    - Calls ¨ft_line¨ to extract the first line and returns it.
    - Updates ¨buffer¨ to store the remaining content after the first line.*/
char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	buffer = read_file(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_line(buffer);
	buffer = ft_next(buffer);
	return (line);
}

/*
int	main(void)
{
	char	*line;
	int		i;
	int		fd1;
	
	fd1 = open("tests/example.txt", O_RDONLY);
	i = 1;
	while (i < 7)
	{
		line = get_next_line(fd1);
		printf("line [%02d]: %s", i, line);
		free(line);
		i++;
	}
	close(fd1);
	return (0);
}
*/
