/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 21:46:06 by jleslee           #+#    #+#             */
/*   Updated: 2021/11/22 16:04:23 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthup(unsigned long long int n, int *res)
{
	if (n >= 16)
	{
		ft_puthup(n / 16, res);
		ft_puthup(n % 16, res);
	}
	else if (n > 9 && n < 16)
		ft_putchar(n % 10 + 65, res);
	else
		ft_putchar(n % 10 + 48, res);
	return (*res);
}
