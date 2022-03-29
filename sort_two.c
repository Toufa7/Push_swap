/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:13:59 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/19 20:54:09 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_list **stack_a)
{
	int	one;
	int	two;

	one = (*stack_a)->content;
	two = (*stack_a)->next->content;
	if (one > two)
		swap_a(stack_a, 0);
}
