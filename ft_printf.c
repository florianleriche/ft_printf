/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:01:12 by fleriche          #+#    #+#             */
/*   Updated: 2022/12/16 12:17:44 by fleriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* The functions in the printf() family produce output according to 
 * a format as described below. */

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	arg;

	i = 0;
	count = 0;
	va_start(arg, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			ft_arguments(s[i + 1], arg, &count);
			i++;
		}
		else
			ft_putchar(s[i], &count);
		i++;
	}
	va_end(arg);
	return (count);
}

/*int	main(void)
{
	printf("-------------- Print char -------------\n");
	char c = 'h';
	printf("Vrai fonction: len = %d\n", printf("%c\n", c));
	ft_printf("Ma   fonction: len = %i\n", ft_printf("%c\n", c));
	// ------------------------------------------------------------
	printf("-------------- Print string -------------\n");
	char str[] = "Bonjour! Ca fonctionne!?";
	printf("taille = %d\n", printf("Vrai fonction: %s\n", str));
	ft_printf("taille = %d\n", ft_printf("Ma   fonction: %s\n", str));
	// ------------------------------------------------------------
	printf("-------------- Print hexa -------------\n");
	int n = 0;
	printf("taille = %d\n", printf("Vrai fonction: %x\n", n));
	ft_printf("taille = %d\n", ft_printf("Ma   fonction: %x\n", n));
	// ------------------------------------------------------------
	printf("-------------- Print percent -------------\n");
	printf("taille = %d\n", printf("Vrai fonction: %%\n"));
	ft_printf("taille = %d\n", ft_printf("Ma   fonction: %%\n"));
	// ------------------------------------------------------------
	printf("-------------- Print unsigned -------------\n");
	unsigned int number = 4294967295;
	printf("taille = %d\n", printf("Vrai fonction: %u\n", number));
	ft_printf("taille = %d\n", ft_printf("Ma   fonction: %u\n", number));
	// ------------------------------------------------------------
	printf("-------------- Print argument pointer hexa -------------\n");
	char	*ptr = NULL;
	printf("taille = %d\n", printf("%p", ptr));
	ft_printf("taille = %d\n", ft_printf("%p", ptr));
	//----------------------------------------------------------
	printf("-------------- remaining error -------------\n");
	int mine = ft_printf(" %p %p ", NULL, NULL);
	int ref = printf(" %p %p ", NULL, NULL);
	printf("mine : %d ; ref : %d\n", mine, ref);

	return (0);
}*/
