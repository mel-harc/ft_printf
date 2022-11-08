/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:05:04 by mel-harc          #+#    #+#             */
/*   Updated: 2022/11/08 23:42:24 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_cas(char c, va_list args, int *sum)
{
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), sum);
	if (c == 'c')
		ft_putchar(va_arg(args, int), sum);
	if (c == 's')
		ft_putstr(va_arg(args, char *), sum);
	if (c == 'u')
		ft_putnbr_un(va_arg(args, unsigned int), sum);
	if (c == '%')
		ft_putchar('%', sum);
	if (c == 'x')
		ft_puthexa(va_arg(args, unsigned int), sum, 'l');
	if (c == 'X')
		ft_puthexa(va_arg(args, unsigned int), sum, 'u');
	if (c == 'p')
	{
		ft_putstr("0x", sum);
		ft_putadd(va_arg(args, unsigned long long), sum);
	}
}

int	ft_printf(const char *str, ...)
{
	int		sum;
	int		i;
	va_list	args;

	sum = 0;
	i = 0;
	va_start (args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ft_cas(str[i], args, &sum);
		}
		else
			ft_putchar(str[i], &sum);
		i++;
	}
	va_end(args);
	return (sum);
}
