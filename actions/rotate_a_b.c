/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:04:06 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/29 14:33:20 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"

void	rotate_a_b(t_list **stack_a, t_list **stack_b, int x)
{
	rotate_a(stack_a, 1);
	rotate_b(stack_b, 1);
	if (x == 0)
	{
		ft_putstr("rr\n");
	}
}
