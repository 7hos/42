/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:26:33 by thossain          #+#    #+#             */
/*   Updated: 2023/12/18 23:11:44 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/*
✓ • %c Prints a single character.
✓ • %s Prints a string (as defined by the common C convention).
✘ • %p The void * pointer argument has to be printed in hexadecimal format.
✓ • %d Prints a decimal (base 10) number.
✘ • %i Prints an integer in base 10.
✘ • %u Prints an unsigned decimal (base 10) number. 
✓ • %x Prints a number in hexadecimal (base 16) lowercase format. 
✘ • %X Prints a number in hexadecimal (base 16) uppercase format.
✘ • %% Prints a percent sign.
*/
int	print_digit(long n, int base)
{
	int		count;
	char	*symbols;

	symbols = "0123456789abcdef";
	if (n < 0)
	{
		write(1, "-", 1);
		return (print_digit(-n, base) + 1);
	}
	else if (n < base)
	{
		return (ft_print_char(symbols[n]));
	}
	else
	{
		count = print_digit(n / base, base);
		return (count + print_digit(n % base, base));
	}
}

int	print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_print_char(va_arg(ap, int));
	else if (specifier == 's')
		count += ft_print_str(va_arg(ap, char *));
	else if (specifier == 'd')
		count += print_digit((long)(va_arg(ap, int)), 10);
	else if (specifier == 'x')
		count += print_digit((long)(va_arg(ap, unsigned int)), 16);
	else
		count += write(1, &specifier, 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start (ap, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			count += print_format(*(++format), ap);
		else
			count += write (1, format, 1);
		++format;
	}
	va_end (ap);
	return (count);
}
/*
int main()
{
    int count;

    count = ft_printf("Hello %s\n", "John");
    ft_printf("The chars written are %d\n", count);
    count = ft_printf("%x\n", 42);
    ft_printf("The chars written are %d\n", count);
    count = printf("%x\n", 42);
    printf("The chars written are %d\n", count);
	int var = -1;
	int *ptr = &var;
	printf("The address in decimal : %d \n", *ptr); 
    printf("The address in hexadecimal : %p \n", ptr); 
}
*/