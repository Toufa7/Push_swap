/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:03:56 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/29 14:31:18 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"

void	reverse_rotate_b(t_list **stack_b, int y)
{
	t_list	*prelast;
	t_list	*last;

	if (*stack_b == NULL)
		return ;
	if (ft_nodesize(*stack_b) < 2)
		return ;
	last = ft_lastlist(*stack_b);
	prelast = *stack_b;
	while (prelast->next->next != NULL)
	{
		prelast = prelast->next;
	}
	prelast->next = NULL;
	ft_addtofront(stack_b, last);
	if (y == 0)
	{
		ft_putstr("rrb\n");
	}
}
