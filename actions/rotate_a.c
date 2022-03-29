/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:04:01 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/29 15:25:19 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"

void	rotate_a(t_list **stack_a, int x)
{
	t_list	*temp;

	if (*stack_a == NULL)
		return ;
	if (ft_nodesize(*stack_a) == 0 || ft_nodesize(*stack_a) == 1)
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = NULL;
	ft_addtoback(stack_a, temp);
	if (x == 0)
	{
		ft_putstr("ra\n");
	}
}
