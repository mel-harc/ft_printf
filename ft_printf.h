/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:33:06 by mel-harc          #+#    #+#             */
/*   Updated: 2022/11/08 23:37:07 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <string.h>

void	ft_putchar(char c, int *sm);
void	ft_putstr(char *str, int *sum);
size_t	ft_strlen(const char *str);
void	ft_putnbr(int n, int *sum);
void	ft_putnbrUn(unsigned int n, int *sum);
void	ft_puthexa(unsigned int n, int *sum, char c);
void	ft_nbrhexa(unsigned int n, int *sum, char c);
void	ft_putadd(unsigned long long nb, int *sum);

#endif
