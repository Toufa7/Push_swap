/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:38:55 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/29 14:09:58 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"

void	swap_a(t_list	**stack_a, int x)
{
	t_list	*temp;

	if (ft_nodesize(*stack_a) == 0 || ft_nodesize(*stack_a) == 1)
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = (*stack_a)->next;
	(*stack_a)->next = temp;
	if (x == 0)
	{
		ft_putstr("sa\n");
	}
}
