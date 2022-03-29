/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_less_than_hundred.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:14:29 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/21 18:11:23 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_less_than_hundred(t_list **stack_a, t_list **stack_b)
{
	int	size;
	int	idx;
	int	n;

	size = ft_nodesize(*stack_a);
	while (size > 3)
	{
		idx = get_index(*stack_a, find_min(*stack_a));
		if (idx <= size / 2)
		{
			n = idx - 1;
			while (n-- > 0)
				rotate_a(stack_a, 0);
		}
		else
		{
			n = size - idx + 1;
			while (n-- > 0)
				reverse_rotate_a(stack_a, 0);
		}
		push_b(stack_a, stack_b, 0);
		size--;
	}
	sort_three(stack_a);
}
