/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 08:39:53 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/29 15:25:29 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sorting(t_list	*stack)
{
	int	one;
	int	two;

	if (ft_nodesize(stack) == 0 || ft_nodesize(stack) == 1)
		return (1);
	while (stack->next)
	{
		one = stack->content;
		two = stack->next->content;
		if (one > two)
		{
			return (0);
		}
		stack = stack->next;
	}
	return (1);
}
