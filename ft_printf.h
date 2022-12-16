/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkace <abelkace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 10:52:39 by abelkace          #+#    #+#             */
/*   Updated: 2022/12/16 20:00:21 by abelkace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <string.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_hexalowercase(unsigned int n);
int	ft_hexauppercase(unsigned int n);
int	ft_check_type(va_list ptr, char c);
int	ft_pointer(unsigned long n);
int	ft_positive(unsigned int n);
int	ft_printf(const char *p, ...);

#endif
