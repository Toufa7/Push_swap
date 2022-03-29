/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_linkedlist.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:16:14 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/20 21:13:26 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*convert_linkedlist(t_list *stack)
{
	int	i;
	int	len;
	int	*arr;

	len = ft_nodesize(stack);
	arr = malloc(sizeof(int) * len);
	if (!arr)
		return (0);
	i = 0;
	while (i < len)
	{
		arr[i] = stack->content;
		stack = stack->next;
		i++;
	}
	return (arr);
}
