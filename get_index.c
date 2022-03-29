/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:16:19 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/20 19:47:35 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index(t_list *stack, int look)
{
	int	i;

	i = 1;
	while (stack)
	{
		if (stack->content == look)
			return (i);
		stack = stack->next;
		i++;
	}
	return (0);
}
