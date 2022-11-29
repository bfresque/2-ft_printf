/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfresque <bfresque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:47:01 by bfresque          #+#    #+#             */
/*   Updated: 2022/11/29 11:24:12 by bfresque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_print_str(char *str)
{
	int i;

	i = 0;
	if (!str)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (*str)
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}


int	ft_print_nbr(int nb)
{
	int len;
	char num;

	len = 0;
	num = itoa(nb);
	ft_print_str(num);
	free(num);
	return(len);
}

