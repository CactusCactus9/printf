/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexalowercase.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkace <abelkace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:48:38 by abelkace          #+#    #+#             */
/*   Updated: 2022/12/15 13:53:14 by abelkace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexalowercase(unsigned int n)
{
	int		count;
	char	*s;

	s = "0123456789abcdef";
	count = 0;
	if (n >= 0 && n <= 15)
	{
		write(1, &s[n], 1);
		count++;
	}
	else
	{
		count += ft_hexalowercase(n / 16);
		count += ft_hexalowercase(n % 16);
	}
	return (count);
}
