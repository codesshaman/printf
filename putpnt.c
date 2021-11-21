/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putpnt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:34:35 by jleslee           #+#    #+#             */
/*   Updated: 2021/11/21 17:35:47 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpnt(unsigned long long int num)
{
	int	i;

	i = 2;
	write(1, "0x", 2);
	i += ft_puthex(num);
	return (i);
}