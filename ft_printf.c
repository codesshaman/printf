/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:43:41 by jleslee           #+#    #+#             */
/*   Updated: 2021/11/21 17:46:37 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_choose(const char *s, va_list ap)
{
	if (*s == '%')
		g_conter += write (1, "%", 1);
	else if (*s == 'c')
		g_conter += ft_putchar(va_arg(ap, int));
	else if (*s == 's')
		g_conter += ft_putstr(va_arg(ap, char *));
	else if (*s == 'd' || *s == 'i')
		g_conter += ft_putdec(va_arg(ap, int));
	else if (*s == 'u')
		g_conter += ft_putuns(va_arg(ap, unsigned int));
	else if (*s == 'x')
		g_conter += ft_puthex((unsigned int)va_arg(ap, unsigned long long int));
	else if (*s == 'X')
		g_conter += ft_puthup((unsigned int)va_arg(ap, unsigned long long int));
	else if (*s == 'p')
		g_conter += ft_putpnt(va_arg(ap, long long));
	return (g_conter);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		res;

	g_conter = 0;
	res = 0;
	if (!str)
		return (0);
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
			res += print_choose(++str, ap);
		else
			res += write(1, &str, 1);
		str++;
	}
	va_end(ap);
	return (res);
}

int	main(int argc, char **argv)
{
	if (argc >= 1)
	{
		ft_printf("%c", 'D');
		ft_printf("%c", '\n');
		ft_printf("%s", "Hello");
		ft_printf("%c", '\n');
		ft_printf("%d", -651651);
		ft_printf("%c", '\n');
		ft_printf("%u", 1);
		ft_printf("%c", '\n');
		ft_printf("%x", 66);
		ft_printf("%c", '\n');
		ft_printf("%X", 33);
		ft_printf("%c", '\n');
		ft_printf("%p", 33);
		ft_printf("%c", '\n');
		ft_printf("%p, %s", 33, " коровы", );
	}
	return (0);
}
