/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkace <abelkace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:51:41 by abelkace          #+#    #+#             */
/*   Updated: 2022/12/15 15:55:20 by abelkace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *p, ...)
{
	int		i;
	int		count;
	va_list	ptr;

	i = 0;
	count = 0;
	va_start(ptr, p);
	while (p[i])
	{
		if (p[i] == '%')
		{
			i++;
			if (p[i] == '\0')
				break ;
			else
				count += ft_check_type (ptr, p[i]);
		}
		else
			count += write(1, &p[i], 1);
		i++;
	}
	va_end(ptr);
	return (count);
}
