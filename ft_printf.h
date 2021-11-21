/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:46:29 by jleslee           #+#    #+#             */
/*   Updated: 2021/11/21 17:37:30 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int g_conter;
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putdec(int n);
int	ft_putuns(unsigned int num);
int	ft_puthex(unsigned long long num);
int	ft_puthup(unsigned long long num);
int	ft_putpnt(unsigned long long int num);
int	ft_printf(const char *s, ...);

#endif
