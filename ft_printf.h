/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:04:05 by fleriche          #+#    #+#             */
/*   Updated: 2022/12/15 10:13:15 by fleriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *s, ...);
void	ft_arguments(char str, va_list arg, int *count);
size_t	ft_strlen(char *s);
void	ft_putstr(char *s, int *count);
void	ft_putchar(char c, int *count);
void	ft_putnbr(int n, int *count);
void	ft_putnbr_u(unsigned int n, int *count);

#endif
