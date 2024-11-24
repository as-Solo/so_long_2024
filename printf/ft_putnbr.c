/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 21:11:01 by alejsanc          #+#    #+#             */
/*   Updated: 2023/01/24 21:11:04 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	static int		cont;
	char			aux;
	long			nbr;
	char			neg;

	nbr = n;
	neg = '-';
	cont = 0;
	if (n < 0)
	{
		write(1, &neg, 1);
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		nbr %= 10;
	}
	aux = nbr + 48;
	write(1, &aux, 1);
	cont++;
	if (n < 0)
		cont++;
	return (cont);
}

/*
int main(void)
{
	printf ("\n%i", ft_putnbr(-20000000));
	return (0);
}
*/