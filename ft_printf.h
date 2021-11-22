/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:46:29 by jleslee           #+#    #+#             */
/*   Updated: 2021/11/22 16:03:46 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(char c, int *res);
int	ft_putstr(char *s, int *res);
int	ft_putdec(int n, int *res);
int	ft_putuns(unsigned int n, int *res);
int	ft_puthex(unsigned long long int n, int *res);
int	ft_puthup(unsigned long long num, int *res);
int	ft_putpnt(unsigned long long int n, int *res);

#endif
