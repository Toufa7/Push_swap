/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:26:53 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/19 08:10:41 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "linkedlist.h"

long long	ft_atoi(const char *str)
{
	int			i;
	long long	rslt;
	int			sign;

	if (ft_strlen(str) == 0)
	{
		ft_printf("Error\n");
		exit(1);
	}
	i = 0;
	rslt = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
		sign = -sign ;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		rslt = (rslt * 10) + (str[i] - '0');
		i++;
	}
	return (rslt * sign);
}
