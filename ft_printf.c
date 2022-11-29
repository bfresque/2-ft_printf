/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfresque <bfresque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:32:11 by bfresque          #+#    #+#             */
/*   Updated: 2022/11/29 11:23:38 by bfresque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int ft_typeconvert(va_list parms,const char format)
{
	int printlen;

	printlen = 0;
	if (format == "s")
		printlen += ft_print_str(va_arg(parms, char));
	if (format == "c")
		printlen += ft_print_char(va_arg(parms, int));
	if (format == "d" || format == "i")
		printlen += ft_print_nbr(va_arg(parms, int));
	if (format == "u")
		printlen += ft_print_dec(va_arg(parms, unsigned int));
	if (format == 'x' || format == "X")
		printlen += ft_print_b16(va_arg(parms, unsigned int));
	if (format == "p")
		printlen += ft_print_point(va_arg(parms, long long int));
	if (format == '%')
		printlen += ft_print_char('%');
	return (printlen);
}

int	ft_printf(const char *format, ...)
{
	int 	i;
	va_list	parms;
	int	printlen;

	i = 0;
	printlen = 0;
	va_start(parms, format);
	while(*format)
	{
		if (format[i] == '%')
		{
			printlen += ft_typeconvert(parms, format[i + 1]);
			i++;
		}
		else
		{
			printlen += ft_typeconvert(parms, format[i]);
		}
	}
	va_end(parms);
	return (printlen);
}

int main ()
{
	ft_printf("%c \n", 'f');
}