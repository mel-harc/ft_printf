#ifndef		FT_PRINTF_H
# define	FT_PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

void	ft_putchar(char c, int *sm);
void	ft_putstr(char *str, int *sum);
size_t	ft_strlen(const char *str);
void	ft_putnbr(int n, int *sum);
void	ft_putnbrUn(unsigned int n, int *sum);
void	ft_puthexa(unsigned int n, int *sum, char c);
void	ft_nbrhexa(unsigned int n, int *sum, char c);
void	ft_putadd(unsigned long long nb, int *sum);

#endif
