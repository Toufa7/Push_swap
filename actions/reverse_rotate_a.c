/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:03:38 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/29 14:10:50 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"

void	reverse_rotate_a(t_list **stack_a, int x)
{
	t_list	*prelast;
	t_list	*last;

	if (ft_nodesize(*stack_a) == 0 || ft_nodesize(*stack_a) == 1)
		return ;
	last = ft_lastlist(*stack_a);
	prelast = *stack_a;
	while (prelast->next->next != NULL)
	{
		prelast = prelast->next;
	}
	prelast->next = NULL;
	ft_addtofront(stack_a, last);
	if (x == 0)
	{
		ft_putstr("rra\n");
	}
}
