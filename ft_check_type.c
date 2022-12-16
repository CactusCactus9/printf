/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkace <abelkace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:15:46 by abelkace          #+#    #+#             */
/*   Updated: 2022/12/14 02:40:15 by abelkace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_type(va_list ptr, char c)
{
	int	i;

	i = 0;
	if (c == 'c')
		i += ft_putchar(va_arg(ptr, int));
	else if (c == 's')
		i += ft_putstr(va_arg(ptr, char *));
	else if (c == 'p')
	{
		i += ft_putstr("0x");
		i += ft_pointer(va_arg(ptr, unsigned long));
	}
	else if (c == 'd' || c == 'i')
		i += ft_putnbr(va_arg(ptr, int));
	else if (c == 'u')
		i += ft_positive(va_arg(ptr, unsigned int));
	else if (c == 'x')
		i += ft_hexalowercase(va_arg(ptr, unsigned int));
	else if (c == 'X')
		i += ft_hexauppercase(va_arg(ptr, unsigned int));
	else
		i += ft_putchar(c);
	return (i);
}
