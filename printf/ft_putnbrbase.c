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

int	ft_putnbrbase(unsigned int n, char *base)
{
	static int		cont;
	char			aux;
	unsigned int	nbr;
	unsigned int	n_base;

	cont = 0;
	n_base = ft_strlen(base);
	nbr = n;
	if (nbr >= n_base)
	{
		ft_putnbrbase(nbr / n_base, base);
		nbr %= n_base;
	}
	aux = base[nbr];
	write(1, &aux, 1);
	cont++;
	return (cont);
}

/*
int main(void)
{
	printf ("\n%i", ft_putnbrbase(346, "0123456789abcdef"));
	return (0);
}
*/