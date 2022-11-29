/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfresque <bfresque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:32:11 by bfresque          #+#    #+#             */
/*   Updated: 2022/11/29 14:08:26 by bfresque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int ft_typeconvert(va_list args,const char format)
{
	int printlen;

	printlen = 0;
	if (format == 's')
		printlen += ft_print_str(va_arg(args, char *));
	else if (format == 'c')
		printlen += ft_print_char(va_arg(args, int));
	else if (format == 'd' || format == 'i')
		printlen += ft_print_nbr(va_arg(args, int));
	else if (format == 'u')
		printlen += ft_print_unsigned(va_arg(args, unsigned int));
	/*
	else if (format == 'x' || format == 'X')
		printlen += ft_print_b16(va_arg(args, unsigned int));
	else if (format == 'p')
		printlen += ft_print_point(va_arg(args, long long int));
	*/
	else if (format == '%')
		printlen += ft_print_char('%');
	return (printlen);
}

int	ft_printf(const char *format, ...)
{
	int 	i;
	va_list	args;
	int	printlen;

	i = 0;
	printlen = 0;
	va_start(args, format);
	while(format[i])
	{
		if (format[i] == '%')
		{
			printlen += ft_typeconvert(args, format[i + 1]);
			i++;
		}
		else
			printlen += ft_typeconvert(args, format[i]);
		i++;
	}
	va_end(args);
	return (printlen);
}
 
#include <stdio.h>
int main (void)
{
	ft_printf("%u \n", 123456);
	printf("%u \n", 123456);
	return (0);
}