/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfresque <bfresque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 09:36:08 by bfresque          #+#    #+#             */
/*   Updated: 2022/11/30 16:47:12 by bfresque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "ft_printf.h"

int	ft_print_b16(unsigned int num, const char format);
int	ft_print_nbr(int nb);
int	ft_print_ptr(unsigned long long ptr);
int	ft_print_str(char *str);
int	ft_print_unsigned(unsigned int n);
int	ft_printf(const char *format, ...);
int	ft_print_b16(unsigned int num, const char format);
int	ft_print_char(char c);
char	*ft_uitoa(unsigned int n);

#endif