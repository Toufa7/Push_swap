/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_nums_to_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:26:12 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/21 18:11:15 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_keynbr(int pivot, t_list *stack_a)
{
	while (stack_a)
	{
		if (stack_a->content <= pivot)
			return (1);
		stack_a = stack_a ->next;
	}
	return (0);
}

int	get_num_in_chunck(t_list *stack_a, int pivot)
{
	int	i;

	i = 0;
	while (stack_a)
	{
		if (stack_a->content <= pivot)
			break ;
		i++;
		stack_a = stack_a->next;
	}
	return (i);
}

void	push_nums_to_b(t_list **stack_a, t_list **stack_b, int pivot)
{
	int	idx;
	int	x;
	int	size;

	size = ft_nodesize(*stack_a);
	while (check_keynbr(pivot, *stack_a) != 0)
	{
		idx = get_num_in_chunck(*stack_a, pivot);
		if (idx < size / 2)
		{
			x = idx - 1;
			while (x-- >= 0)
				rotate_a(stack_a, 0);
		}
		else
		{
			x = size - idx + 1;
			while (x-- >= 0)
				reverse_rotate_a(stack_a, 0);
		}
		push_b(stack_a, stack_b, 0);
	}
}
