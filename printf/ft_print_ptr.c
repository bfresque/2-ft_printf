/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfresque <bfresque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:27:24 by bfresque          #+#    #+#             */
/*   Updated: 2022/11/30 14:26:04 by bfresque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr_len(unsigned long long nb)
{
	int	i;

	i = 0;
	while (nb != 0)
	{
		i++;
		nb = nb / 16;
	}
	return (i);
}

void	ft_ptr_base(unsigned long long nb)
{
	if (nb >= 16)
	{
		ft_ptr_base(nb / 16);
		ft_ptr_base(nb % 16);
	}
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	printlen;

	printlen = 0;
	printlen += write(1, "0x", 2);	
	if (ptr == 0)
		printlen += write(1, "0", 1);
	else
	{
		ft_ptr_base(ptr);
		printlen += ft_ptr_len(ptr);
	}
	return (printlen);
}
