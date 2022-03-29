/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:46:36 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/29 15:23:58 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"

void	push_a(t_list	**stack_a, t_list	**stack_b, int x)
{
	t_list	*temp;

	if (ft_nodesize(*stack_b) == 0)
		return ;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next = NULL;
	ft_addtofront(stack_a, temp);
	if (x == 0)
	{
		ft_putstr("pa\n");
	}
}
