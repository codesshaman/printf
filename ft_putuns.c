/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 18:22:55 by jleslee           #+#    #+#             */
/*   Updated: 2021/11/22 16:04:30 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuns(unsigned int n, int *res)
{
	if (n > 9)
	{
		ft_putuns(n / 10, res);
		ft_putuns(n % 10, res);
	}
	else
		ft_putchar(n + 48, res);
	return (*res);
}
