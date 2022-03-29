/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:14:35 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/20 19:47:27 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	support_three(t_list **stack_a, int one, int two, int three)
{
	if (find_min(*stack_a) == one && find_max(*stack_a) == two)
	{
		reverse_rotate_a(stack_a, 0);
		swap_a(stack_a, 0);
	}
	if (find_min(*stack_a) == two && find_max(*stack_a) == one)
	{
		reverse_rotate_a(stack_a, 0);
		reverse_rotate_a(stack_a, 0);
	}
	if (find_min(*stack_a) == three && find_max(*stack_a) == one)
	{
		swap_a(stack_a, 0);
		reverse_rotate_a(stack_a, 0);
	}
	if (find_min(*stack_a) == three && find_max(*stack_a) == two)
	{
		reverse_rotate_a(stack_a, 0);
	}
	if (find_min(*stack_a) == two && find_max(*stack_a) == three)
	{
		swap_a(stack_a, 0);
	}
}

void	sort_three(t_list **stack_a)
{
	int	one;
	int	two;
	int	three;

	one = (*stack_a)->content;
	two = (*stack_a)->next->content;
	three = (*stack_a)->next->next->content;
	if (ft_nodesize(*stack_a))
	{
		support_three(stack_a, one, two, three);
	}
}
