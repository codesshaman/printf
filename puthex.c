/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puthex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:43:07 by jleslee           #+#    #+#             */
/*   Updated: 2021/11/21 17:37:58 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long num)
{
	int		a;
	int		i;
	char	*str;

	i = 0;
	str = "0123456789abcdef";
	if (num >= 16)
		i += ft_puthex(num / 16);
	a = str[num % 16];
	i += write(1, &a, 1);
	return (i);
}

int	ft_puthup(unsigned long long num)
{
	int		a;
	int		i;
	char	*str;

	i = 0;
	str = "0123456789ABCDEF";
	if (num >= 16)
		i += ft_puthup(num / 16);
	a = str[num % 16];
	i += write(1, &a, 1);
	return (i);
}
