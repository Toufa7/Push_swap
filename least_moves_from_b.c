/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   least_moves_from_b.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:16:38 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/21 18:11:05 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	least_moves_from_b(t_list	**stack_a, t_list	**stack_b)
{
	int	size;
	int	max;
	int	idx;
	int	n;

	size = ft_nodesize(*stack_b);
	while (size)
	{
		max = find_max(*stack_b);
		idx = get_index(*stack_b, max);
		if (idx <= size / 2)
		{
			n = idx - 1;
			while (n-- > 0)
				rotate_b(stack_b, 0);
		}
		else
		{
			n = size - idx + 1;
			while (n-- > 0)
				reverse_rotate_b(stack_b, 0);
		}
		push_a(stack_a, stack_b, 0);
		size--;
	}
}
