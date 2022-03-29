/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:04:12 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/29 14:31:24 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"

void	rotate_b(t_list	**stack_b, int y)
{
	t_list	*temp;

	if (*stack_b == NULL)
		return ;
	if (ft_nodesize(*stack_b) < 2)
		return ;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next = NULL;
	ft_addtoback(stack_b, temp);
	if (y == 0)
	{
		ft_putstr("rb\n");
	}
}
