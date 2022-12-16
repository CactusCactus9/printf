/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexauppercase.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkace <abelkace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:09:04 by abelkace          #+#    #+#             */
/*   Updated: 2022/12/15 16:26:37 by abelkace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexauppercase(unsigned int n)
{
	int		count;
	char	*s;

	s = "0123456789ABCDEF";
	count = 0;
	if (n >= 0 && n <= 15)
	{
		write(1, &s[n], 1);
		count++;
	}
	else
	{
		count += ft_hexauppercase(n / 16);
		count += ft_hexauppercase(n % 16);
	}
	return (count);
}
