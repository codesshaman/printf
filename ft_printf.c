/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:43:41 by jleslee           #+#    #+#             */
/*   Updated: 2021/11/22 16:03:42 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include <stdio.h>

int	print_choose(const char *s, va_list ap, int *res)
{
	if (*s == 'c')
		ft_putchar(va_arg(ap, int), res);
	else if (*s == 's')
		ft_putstr(va_arg(ap, char *), res);
	else if (*s == 'd' || *s == 'i')
		ft_putdec(va_arg(ap, int), res);
	else if (*s == 'u')
		ft_putuns(va_arg(ap, unsigned int), res);
	else if (*s == 'x')
		ft_puthex((unsigned int)va_arg(ap, unsigned long long int), res);
	else if (*s == 'X')
		ft_puthup((unsigned int)va_arg(ap, unsigned long long int), res);
	else if (*s == 'p')
		ft_putpnt(va_arg(ap, unsigned long long int), res);
	else if (*s == '%')
		ft_putchar('%', res);
	return (*res);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		res;

	res = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
			res = print_choose(++str, ap, &res);
		else
			ft_putchar(*str, &res);
		str++;
	}
	va_end(ap);
	return (res);
}

// int	main(int argc, char **argv)
// {
// 	char r;

// 	r = 'y';
// 	if (argc >= 1)
// 	{
// 		printf("%d\n", printf("%c", 'C'));
// 		ft_printf("%d\n", ft_printf("%c", 'C'));
// 		ft_printf("%c", '\n');
// 		ft_printf("%s\n", "Hello");
// 		ft_printf("%c", '\n');
// 		ft_printf("%d\n", -651651);
// 		ft_printf("%c", '\n');
// 		ft_printf("%u", 1);
// 		ft_printf("%c", '\n');
// 		ft_printf("%x", 66);
// 		ft_printf("%c", '\n');
// 		ft_printf("%X", 33);
// 		ft_printf("%c", '\n');
// 		ft_printf("%p", 33);
// 		ft_printf("%c", '\n');
// 		ft_printf("%p, %s\n", 33, "коровы");
// 	}
// 	printf("%d\n", printf("%c", r));
// 	ft_printf("%d\n", ft_printf("%c", r));
// 	return (0);
// }
