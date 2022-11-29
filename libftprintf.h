/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfresque <bfresque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 09:36:08 by bfresque          #+#    #+#             */
/*   Updated: 2022/11/29 13:34:38 by bfresque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void	ft_putstr(char *str);
int		ft_print_str(char *str);
int		ft_print_nbr(int nb);
int		ft_print_char(char c);
static int ft_typeconvert(va_list parms, char c);
int ft_print_unsigned(unsigned int n);

char	*ft_itoa(int n);

#endif