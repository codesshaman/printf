/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putdec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:00:50 by jleslee           #+#    #+#             */
/*   Updated: 2021/11/21 17:36:04 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdec(int n)
{
	int	i;
	int	last;

	i = 0;
	if (!n)
		return (0);
	if (n == -2147483648)
		i += ft_putstr("-2147483648");
	if (n < 0)
	{
		i += write (1, "-", 1);
		ft_putdec(-n);
	}
	else if (n > 9)
	{
		i += ft_putdec(n / 10);
		ft_putdec(n % 10);
	}
	else
	{
		last = n % 10 + '0';
		i += write (1, &last, 1);
	}
	return (i);
}
