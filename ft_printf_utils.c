/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:35:15 by fleriche          #+#    #+#             */
/*   Updated: 2022/12/15 10:31:15 by fleriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putchar(char c, int *count)
{
	write(1, &c, 1);
	*count += 1;
}

void	ft_putstr(char *s, int *count)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i], count);
		i++;
	}
}

void	ft_putnbr(int n, int *count)
{
	if (n == -2147483648)
		ft_putstr("-2147483648", count);
	else if (n < 0)
	{
		ft_putchar('-', count);
		ft_putnbr(n * -1, count);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10, count);
		ft_putnbr(n % 10, count);
	}
	else
		ft_putchar('0' + n, count);
}

void	ft_putnbr_u(unsigned int n, int *count)
{
	if (n < 0)
	{
		ft_putchar('-', count);
		ft_putnbr(n * -1, count);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10, count);
		ft_putnbr(n % 10, count);
	}
	else
		ft_putchar('0' + n, count);
}
