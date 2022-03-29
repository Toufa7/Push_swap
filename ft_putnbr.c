/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 10:50:51 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/22 12:37:57 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_intlen(int nbr)
{
	int	idx;
	int	sign;

	idx = 0;
	sign = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		sign = 1;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		idx++;
	}
	return (idx + sign);
}

int	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	if (nbr >= 0 && nbr <= 9)
		ft_putchar(nbr + '0');
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nbr);
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putchar((nbr % 10) + '0');
	}
	return (ft_intlen(nbr));
}
