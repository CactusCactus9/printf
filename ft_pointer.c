/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkace <abelkace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:44:41 by abelkace          #+#    #+#             */
/*   Updated: 2022/12/14 03:17:20 by abelkace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long n)
{
	int		count;
	char	*s;

	count = 0;
	s = "0123456789abcdef";
	if (n >= 16)
	{
		count += ft_pointer(n / 16);
		count += ft_pointer(n % 16);
	}
	else
		count += ft_putchar(s[n]);
	return (count);
}
