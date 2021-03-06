/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:09:24 by jleslee           #+#    #+#             */
/*   Updated: 2021/11/22 16:04:27 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s, int *res)
{
	int	i;

	i = -1;
	if (!s)
		s = "(null)\0";
	while (s[++i])
		ft_putchar(s[i], res);
	return (*res);
}
