/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selecting_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:17:49 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/22 12:58:39 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(int *x, int *y)
{
	int	tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

int	*selectionsort(int arr[], int n)
{
	int	i;
	int	j;
	int	min;

	i = 0;
	min = arr[0];
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (arr[j] < arr[i])
			{
				swap(&arr[j], &arr[i]);
			}
			min = arr[j];
			j++;
		}
		i++;
	}
	return (arr);
}
