/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_fivehundred.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:14:15 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/21 22:34:28 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_five_pivot(int *stack, int index)
{
	int	pivot;

	pivot = stack[FIVEHUNDRED_PIVOT * index];
	return (pivot);
}

void	sort_fivehundred(t_list	*stack_a, t_list	*stack_b)
{
	int	size;
	int	*arr;
	int	a;
	int	i;

	size = ft_nodesize(stack_a);
	arr = selectionsort(convert_linkedlist(stack_a), size);
	i = 1;
	while (i <= FIVENBR_CHUNKS)
	{
		a = 1;
		a = get_five_pivot(arr, i);
		push_nums_to_b(&stack_a, &stack_b, a);
		i++;
	}
	least_moves_from_a(&stack_a, &stack_b);
	sort_three(&stack_a);
	least_moves_from_b(&stack_a, &stack_b);
	ft_freelist(&stack_a);
	free(arr);
}
