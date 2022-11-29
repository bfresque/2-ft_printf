/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfresque <bfresque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:23:38 by bfresque          #+#    #+#             */
/*   Updated: 2022/11/29 13:37:17 by bfresque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

long int	ft_num_int(unsigned int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	char					*str;
	long unsigned int		i;

	i = ft_num_int(n);
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	str[i] = '\0';
	while (n > 0)
	{
		i--;
		str[i] = '0' + (n % 10);
		n /= 10;
	}
	return (str);
}

int	ft_print_unsigned(unsigned int n)
{
	int		printlen;
	char	*num;
	
	printlen = 0;
	if (n == 0)
		printlen += write(1, "0", 1);
	else
	{
		num = ft_uitoa(n);
		printlen += ft_print_str(num);
		free(num);
	}
	return (printlen);
}
