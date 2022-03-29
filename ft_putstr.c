/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 23:09:33 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/22 12:38:14 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	idx;

	idx = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[idx] != 0)
	{
		write(1, &str[idx], 1);
		idx++;
	}
	return (idx);
}
