/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:43:59 by alejsanc          #+#    #+#             */
/*   Updated: 2023/07/15 16:44:02 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putmem(void	*mem)
{
	unsigned long int	memory;

	memory = (unsigned long int)mem;
	write (1, "0x", 2);
	return (ft_puthexa(memory) + 2);
}

/*
int main(void)
{
	char	letra = 'c';
	size_t	mem = (size_t)&letra;
	//int numero = 446;
	char	*base = "0123456789abcdef";
	printf ("Esto es la direccion de verdad %p\nY
	esta la direccion que he guardado %li\n", &letra, mem);
	printf ("%li---%li---%c\n", mem/16, mem%16, base[mem%16]);
	mem /= 16;
	printf ("%li---%li---%c\n", mem/16, mem%16, base[mem%16]);
	mem /= 16;
	printf ("%li---%li---%c\n", mem/16, mem%16, base[mem%16]);
	float ejemplo = 5.4;
	ft_putmem(&ejemplo);
	return (0);
}
	*/
