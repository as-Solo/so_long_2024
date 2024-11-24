/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:44:25 by alejsanc          #+#    #+#             */
/*   Updated: 2023/07/15 16:44:28 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long int n)
{
	static int			cont;
	char				aux;
	unsigned long int	nbr;
	char				*base;

	cont = 0;
	base = "0123456789abcdef";
	nbr = n;
	if (nbr >= 16)
	{
		ft_puthexa(nbr / 16);
		nbr %= 16;
	}
	aux = base[nbr];
	write(1, &aux, 1);
	cont++;
	return (cont);
}
