/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putuns.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 18:22:55 by jleslee           #+#    #+#             */
/*   Updated: 2021/11/21 17:35:40 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuns(unsigned int n)
{
	int	i;
	int	last;

	i = 0;
	if (n < 0)
	{
		i += ft_putuns(-n);
	}
	if (n > 9)
	{
		i += ft_putuns(n / 10);
		ft_putuns(n % 10);
	}
	else
	{
		last = n % 10 + '0';
		i += write(1, &last, 1);
	}
	return (i);
}
