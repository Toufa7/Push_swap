/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 22:08:31 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/22 10:47:57 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	what_comes_next(char when, va_list arg)
{
	int	count;

	count = 0;
	if (when == 's')
		count += ft_putstr(va_arg(arg, char *));
	else if (when == 'd' || when == 'i')
		count += ft_putnbr(va_arg(arg, int));
	else if (!when)
		write(1, "", 0);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	arg;

	i = 0;
	count = 0;
	va_start (arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += what_comes_next(str[i + 1], arg);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			count++;
		}
		i++;
	}
	va_end(arg);
	return (count);
}
