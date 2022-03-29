/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:04:33 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/29 14:52:25 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"

void	swap_b(t_list	**stack_b, int y)
{
	t_list	*temp;

	if (ft_nodesize(*stack_b) == 0)
		return ;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next = (*stack_b)->next;
	(*stack_b)->next = temp;
	if (y == 0)
	{
		ft_putstr("sb\n");
	}
}
