/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 11:07:09 by alimotta          #+#    #+#             */
/*   Updated: 2023/03/19 16:21:42 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

void	ft_print_billion(int nb, char *c, int div);
void	ft_print_million(int nb, char *c, int div, int rem);
void	ft_print_thousand(int nb, char *c, int div, int rem);
void	ft_print_hundred(int nb, char *c, int div, int rem);
void	ft_print_zero(int nb, char *c);
int		ft_atoi(char *argv);

//This function allocate and read dictionary, chack if dictionary is not found
char	*ft_alloc_dict(int argc, char **argv)
{
	char	*c;
	int		fd;
	int		sz;

	c = (char *) malloc(400 * sizeof(char));
	if (argc == 2)
		fd = open("numbers.dict", O_RDONLY);
	else
		fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(1, "Dict Error\n", 11);
		exit(EXIT_FAILURE);
	}	
	sz = read(fd, c, 400);
	c[sz] = '\0';
	close(fd);
	return (c);
}

//This function calls all the functions to display the number
void	ft_print_all(int nb, char *c)
{
	int	div;
	int	rem;

	div = 0;
	rem = 0;
	if (nb == 0)
	{
		ft_print_zero(nb, c);
		write(1, "\n", 1);
		exit(EXIT_SUCCESS);
	}
	if (nb >= 1000000000 && nb > 0)
		ft_print_billion(nb, c, div);
	if (nb >= 1000000 && nb > 0)
		ft_print_million(nb, c, div, rem);
	if (nb >= 1000 && nb > 0)
		ft_print_thousand(nb, c, div, rem);
	if (nb > 0)
		ft_print_hundred(nb, c, div, rem);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	char		*c;
	long int	nb;

	if (argc < 2 || argc > 3)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	c = ft_alloc_dict(argc, argv);
	if (argc == 2)
		nb = ft_atoi(argv[1]);
	else
		nb = ft_atoi(argv[2]);
	if (nb < 0 || nb > 2147483647)
	{
		write(1, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	ft_print_all(nb, c);
	free(c);
	return (0);
}
