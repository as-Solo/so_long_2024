/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:52:53 by alejsanc          #+#    #+#             */
/*   Updated: 2023/01/24 20:52:57 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_selector(char c, va_list arguments)
{
	int	cont;

	cont = 0;
	if (c == '%')
		cont = ft_putchar('%');
	else if (c == 'c')
		cont = ft_putchar(va_arg(arguments, int));
	else if (c == 's')
		cont = ft_putstr(va_arg(arguments, char *));
	else if (c == 'p')
		cont = ft_putmem(va_arg(arguments, void *));
	else if (c == 'd')
		cont = ft_putnbr(va_arg(arguments, int));
	else if (c == 'i')
		cont = ft_putnbr(va_arg(arguments, int));
	else if (c == 'u')
		cont = ft_putnbrbase(va_arg(arguments, int), "0123456789");
	else if (c == 'x')
		cont = ft_putnbrbase(va_arg(arguments, int), "0123456789abcdef");
	else if (c == 'X')
		cont = ft_putnbrbase(va_arg(arguments, int), "0123456789ABCDEF");
	return (cont);
}

int	ft_printf(char const *text, ...)
{
	int		index;
	int		sum;
	va_list	arguments;

	index = 0;
	sum = 0;
	va_start (arguments, text);
	while (*text != '\0')
	{
		if (*text != '%')
		{
			write (1, text, 1);
			sum ++;
		}
		else
		{
			text ++;
			sum += ft_selector (*text, arguments);
		}
		if (*text != '\0')
			text ++;
	}
	va_end (arguments);
	return (sum);
}
