/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackfill.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:32:36 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/22 13:06:58 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"
#include <limits.h>

void	check_doubles(int ac, char *av[])
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
			{
				ft_printf("Error\n");
				exit(1);
			}
			j++;
		}
		i++;
	}
}

void	check_range(char *arg[])
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (ft_atoi(arg[i]) > INT_MAX || ft_atoi(arg[i]) < INT_MIN)
		{
			ft_printf("Error\n");
			exit(1);
		}
		i++;
	}
}

void	check_digit(int ac, char *arg[])
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (arg[i][j])
		{
			if ((arg[i][j] < '0' || arg[i][j] > '9')
			&& !(arg[i][0] == '-' || arg[i][0] == '+'))
			{
				ft_printf("Error\n");
				exit(1);
			}
			j++;
		}
		i++;
	}
}

void	check_after_digit(int ac, char *arg[])
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 1;
		while (arg[i][j])
		{
			if (arg[i][j] < '0' || arg[i][j] > '9')
			{
				ft_printf("Error\n");
				exit(1);
			}
			j++;
		}
		i++;
	}
}

t_list	*ft_stackfill(int nbr, char *arg[])
{
	int		i;
	t_list	*stack_a;

	stack_a = ft_newnode(ft_atoi(arg[1]));
	check_range(arg);
	check_doubles(nbr, arg);
	check_digit(nbr, arg);
	check_after_digit(nbr, arg);
	i = 2;
	while (i < nbr)
	{
		ft_addtoback(&stack_a, ft_newnode(ft_atoi(arg[i])));
		i++;
	}
	return (stack_a);
}
